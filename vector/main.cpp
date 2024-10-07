#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>


const int NumberOfValues = 24;

void sort(std::vector<int> &myVector)
{
    for(int pos = 0; pos < NumberOfValues; pos++)
    {
        int minValue = RAND_MAX; 
        int swappos = 0;

        for(int inner = pos; inner < NumberOfValues; inner++)
        {
            if (myVector[inner] < minValue)
            {
                swappos = inner;
                minValue = myVector[inner];
            }
            myVector[swappos] = myVector[pos];
            myVector[pos]= minValue;
        }
    }
}

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

    for(auto it = randomValues.begin(); it != randomValues.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    sort(randomValues);

    for(auto it = randomValues.begin(); it != randomValues.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}