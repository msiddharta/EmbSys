#include <catch2/catch.hpp>
#include <birthday.h>
#include <sstream>

TEST_CASE("A Birthday entry is serialized correctly")
{
    BD_Entry entry;
    entry.firstname = "Max";
    entry.surname = "Mustermann";
    entry.birthday = "2024-01-01";

    std::string expected = "\"Max\",\"Mustermann\",\"2024-01-01\"\n";

    std::stringstream ss;
    ss << entry;
    std::string result = ss.str();

    REQUIRE (expected == result);
}

TEST_CASE("A Birthday vector is serialized correctly")
{
    BD_Vector myDates;

    BD_Entry entry;
    entry.firstname = "Max";
    entry.surname = "Mustermann";
    entry.birthday = "2024-01-01";
    myDates.push_back(entry);

    entry.firstname = "Anna";
    entry.surname = "Testfrau";
    entry.birthday = "2024-01-02";
    myDates.push_back(entry);

    std::string expected = 
        std::string ("\"Vorname\",\"Nachname\",\"Geburtstag\"\n");
        std::string ("\"Max\",\"Mustermann\",\"2024-01-01\"\n");
        std::string ("\"Anna\",\"Testfrau\",\"2024-01-02\"\n");

    std::stringstream ss;
    ss << myDates;
    std::string result = ss.str();

    REQUIRE (expected == result);
}


TEST_CASE("A Birthday entry is deserialized correctly")
{
    BD_Entry expected;
    expected.firstname = "Max";
    expected.surname = "Mustermann";
    expected.birthday = "2024-01-01";

    std::string input = "\"Max\",\"Mustermann\",\"2024-01-01\"\n";

    BD_Entry entry;
    std::stringstream iss(input);
    iss >> entry;

    REQUIRE (expected.firstname == entry.firstname);
    REQUIRE (expected.surname == entry.surname);
    REQUIRE (expected.birthday == entry.birthday);
}

TEST_CASE("A Birthday vector is deserialized correctly")
{
    BD_Entry entry;
    entry.firstname = "Max";
    entry.surname = "Mustermann";
    entry.birthday = "2024-01-01";
    myDates.push_back(entry);

    entry.firstname = "Anna";
    entry.surname = "Testfrau";
    entry.birthday = "2024-01-02";
    myDates.push_back(entry);

    std::string input = 
        std::string ("\"Vorname\",\"Nachname\",\"Geburtstag\"\n");
        std::string ("\"Max\",\"Mustermann\",\"2024-01-01\"\n");
        std::string ("\"Anna\",\"Testfrau\",\"2024-01-02\"\n");

    BD_Vector myDates;
    std::stringstream iss(input);
    iss >> myDates;

    REQUIRE (2 == myDates.size());

    REQUIRE (entry1.firstname == myDates[0].firstname);

    REQUIRE (entry2.firstname == myDates[1].firstname);
}