#include <iostream>
#include <limits>

int main(int argc, char ** argv)
{
    std::cout << "Hello world!" << std::endl;

    std::cout << "you offered " << argc << " arguments" << std::endl;

    for (int i = 0; i < argc; i++)
    {
        std::cout << "arg " << i << " is " << argv[i] << std::endl;
    }

    long maxvalue = std::numeric_limits<long>::max();
    long minvalue = std::numeric_limits<long>::min();

    std::cout << "datatype long stores values from " << minvalue << " to " << maxvalue << std::endl;

    double mindouble = std::numeric_limits<double>::min();
    double maxdouble = std::numeric_limits<double>::max();

    std::cout << "datatype double stores values from " << mindouble << " to " << maxdouble << std::endl;

    return 0;
}