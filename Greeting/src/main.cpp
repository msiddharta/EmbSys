#include "greeting.h"


int main(){
    std::string message1 = greet();
    std::string message2 = greet("Matheus");

    printf("Message 1: %s\n", message1.c_str());
    printf("Message 2: %s\n", message2.c_str());
}