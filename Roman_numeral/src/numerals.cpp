#include <iostream>
#include <string>

using namespace std;

string convert_to_roman(int num) {
    // Edge cases: Handle numbers less than 1 or greater than 3999
    if (num <= 0 || num > 3999) {
        return "Invalid Input";
    }

    // Arrays of Roman numerals for each digit place
    string thousands[] = {"", "M", "MM", "MMM"};
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    // Construct the Roman numeral
    string roman = thousands[num / 1000] + 
                   hundreds[(num % 1000) / 100] + 
                   tens[(num % 100) / 10] + 
                   ones[num % 10];

    return roman;
}
