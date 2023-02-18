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

#ifndef FIND_LIMIT_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>



using namespace std;

class findLimit{
public:
    findLimit();
    findLimit(int number);  
    virtual ~findLimit();
    int calculate(std::string function, float lim);
private:
    int number;
};

findLimit::findLimit(){
}

findLimit::findLimit(int number){
    this->number = number;
}

findLimit::~findLimit(){
}

int findLimit::calculate(std::string function, float lim){
    char functionArr[function.length() + 1];
    strcpy(functionArr, function.c_str());
    for(int i = 0; i < function.length() + 1; i++)
    {
        if(functionArr[i] == 'x')
        {
            functionArr[i] = lim;
        }
    }
}

#endif