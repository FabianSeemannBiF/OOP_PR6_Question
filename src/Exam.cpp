#include "Exam.h"

Exam::Exam(){
    //ctor
}

Exam::~Exam(){
    //dtor
}

Question* Exam::getCurrentQuestion(){
    if(questions.empty()){
        return nullptr;
    }
    else{
        return questions[0];
    }
}

void Exam::addQuestion(Question* newQuestion){
    questions.push_back(newQuestion);
}


void Exam::nextQuestion(){
    //TBI
}
