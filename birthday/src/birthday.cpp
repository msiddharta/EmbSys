#include <birthday.h>
#include <iostream>
#include <iomanip>
#include <limits>

std::ostream & operator<<(std::ostream &os, BD_Vector &vector)
{
    BD_Entry temp;
    temp.firstname = "Vorname";
    temp.surname = "Nachname";
    temp.birthday = "Geburtstag";

    os << temp;

    for (auto item : vector)
    {
        os << item;
    }

    return os;
}

std::ostream & operator<<(std::ostream &os, BD_Entry &entry)
{
    os << std::quoted(entry.firstname);
    os << ",";
    os << std::quoted(entry.surname);
    os << ",";
    os << std::quoted(entry.birthday);
    os << std::endl;

    return os;
}


std::istream & operator>>(std::istream &is, BD_Vector &vector)
{
    vector.clear();

    BD_Entry temp;

    //erste Zeile ueberspringen
    is >> temp;

    while (is >> temp)
    {
        vector.push_back(temp);
    } 

    return is;
}

std::istream & operator>>(std::istream &is, BD_Entry &entry)
{
    entry.firstname.clear();
    entry.surname.clear();
    entry.birthday.clear();

    auto maxignore = std::numeric_limits<int>::max();

    is >> std::quoted(entry.firstname);
    is.ignore(maxignore, ',');
    is >> std::quoted(entry.surname);
    is.ignore(maxignore, ',');
    is >> std::quoted(entry.birthday);

    return is;
}