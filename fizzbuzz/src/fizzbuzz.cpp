#include <fizzbuzz.h>
#include <string>
#include <iostream>

using namespace std;

string fizzbuzz(int number){

    string fizzbuzz;

    if( number <= 0){
        return fizzbuzz = "Illegal number!";
    }

    if ((number % 3 == 0)&& (number % 5 == 0)){
        
        return fizzbuzz = "fizzbuzz";
    }

    else if (number % 3 == 0){
        return fizzbuzz= "fizz";

    }

    else if (number % 5 == 0){
        return fizzbuzz = "buzz";
    }

    else{
        fizzbuzz = to_string(number);
    }

    return fizzbuzz;
}



