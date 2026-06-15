#include "Question.h"
#include <iostream>

Question::Question(std::string name, int pointValue){
    this->name = name;
    this->pointValue = pointValue;
}

void Question::print(){
    std::cout << name << std::endl;
}
