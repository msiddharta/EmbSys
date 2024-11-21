#include <pascal.h>
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    int numRows = 10;


    std::cout << "----------- Pascals Triangle -----------" << std::endl;
    std::cout << "----------- STARTING -----------\n" << std::endl;

    std::string errorline;
    int errorFlag = 1;
    
    // Check if exactly one argument is passed (excluding the program name)l
    if (argc == 2) {
        numRows = std::atoi(argv[1]);  // Convert string to integer, if error return 0

        // Check if the first character of the argument is '0' (invalid input case)
        if(argv[1][0] == '0')
        {
            errorFlag = 0;
        }
    }
    else
    {
        errorFlag = -1;
    }

    std::string out = pascalsTriangle(numRows, errorFlag);
    std::cout << out;

    std::cout << "----------- END -----------\n\n" << std::endl;
}