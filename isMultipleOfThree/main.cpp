#include "isMultipleOfThree.h"
#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    isMultipleOfThree test(number);
    if(test.calculate()){
        cout << "The number is a multiple of 3." << endl;
    }
    else{
        cout << "The number is not a multiple of 3." << endl;
    }
    return 0;
}