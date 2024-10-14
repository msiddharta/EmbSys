#include <animals.h>

animal::animal(std::string name)
{
    m_name = name;
}

animal::~animal()
{

}

std::string animal::ToString()
{
    return std::string("I am an animal named") + m_name;
}

std::string animal::GetName()
{
    return m_name;
}