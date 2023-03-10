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

#ifndef IS_MULTIPLE_OF_THREE_H
#define IS_MULTIPLE_OF_THREE_H

class isMultipleOfThree{
public:
    isMultipleOfThree();
    isMultipleOfThree(int number);  
    virtual ~isMultipleOfThree();
    bool calculate();
private:
    int number;
};

isMultipleOfThree::isMultipleOfThree(){
}

isMultipleOfThree::isMultipleOfThree(int number){
    this->number = number;
}

isMultipleOfThree::~isMultipleOfThree(){
}

bool isMultipleOfThree::calculate(){
    if(number % 3 == 0){
        return true;
    }
    else{
        return false;
    }
}

#endif