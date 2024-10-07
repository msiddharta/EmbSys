#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>


const int NumberOfValues = 24;
int main()
{
    srand(time(0));
    int random = rand();

    std::vector<int> randomValues;

    for(int i=0; i<NumberOfValues; i++)
    {
        randomValues.push_back(rand());
    }

    //different loop to showdifferent approaches

    for(int i=0; i<NumberOfValues; i++){
        std::cout << randomValues[i] << std::endl;
    }

     for(auto item: randomValues){
        std::cout << item << std::endl;
    }

    return 0;
}