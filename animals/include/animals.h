#pragma once

#include <string>

class animal
{  
    public:
    animal(std::string name);
    ~animal();

    std::string ToString();

    std::string GetName();

    private:
        std::string m_name;
};