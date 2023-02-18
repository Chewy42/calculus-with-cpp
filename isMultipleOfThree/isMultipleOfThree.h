#ifndef IS_MULTIPLE_OF_THREE
#define IS_MULTIPLE_OF_THREE

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