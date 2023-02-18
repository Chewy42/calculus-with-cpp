// * Copyright (C) 2023 Matthew Favela - All Rights Reserved
// * You may use, distribute and modify this code under the
// * terms of the MIT license, which unfortunately won't be
// * written for another century.
// *
// * You should have received a copy of the MIT license with
// * this file. If not, please write to: Chewy42
// * @author Matthew Favela
// * @version 1.0
// * @since 2023-02-17
// */

#include "findLimit.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    findLimit test(number);
    cout << test.calculate("5x-3", argv[1]) << endl;
    return 0;
}