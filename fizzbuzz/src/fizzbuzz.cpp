#include <fizzbuzz.h>
#include <string>

using namespace std;

string fizzbuzz(int number){

    string fizzbuzz;

    if ((number % 3 == 0)&& (number % 5 == 0)){
        fizzbuzz = to_string(number);
        return fizzbuzz;
    }


    if (number % 3 == 0){
        fizzbuzz = "fizz";
        return fizzbuzz;

    }

    if (number % 5 == 0){
        fizzbuzz = "buzz";
        return fizzbuzz;
    }


    return fizzbuzz;
}



