#include <fizzbuzz.h>
#include <string>
#include <iostream>

using namespace std;


int main(int argc, char ** argv){
    string fb;
    for(int i = 1; i<=100; i++){
        fb = fizzbuzz(i);
        cout<<fb<<endl;
    }
    return 0;
}