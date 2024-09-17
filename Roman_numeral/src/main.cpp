#include <numerals.h>
#include <iostream>
#include <string>

int main() {
    int number;
    cout << "Convert arabic numbers to roman numbers!\n" << endl;
    cout<< "please input a number between 0 and 3999: " << endl;
    cin >> number;
    string message = convert_to_roman(number);
    cout << "Roman numeral: \n" << message << endl;
    return 0;
}