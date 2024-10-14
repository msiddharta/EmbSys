#pragma once

#include <string>
#include <vector>

struct BD_Entry
{
    std::string firstname;
    std::string surname;
    std::string birthday;
};

typedef std::vector<BD_Entry> BD_Vector;

std::ostream & operator<<(std::ostream &os, BD_Vector &vector);
// for (auto item: vector)
//      os << item << std::endl;
std::ostream & operator<<(std::ostream &os, BD_Entry &entry);

std::istream & operator>>(std::istream &is, BD_Vector &vector);
std::istream & operator>>(std::istream &is, BD_Entry &entry);