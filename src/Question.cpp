#include "../includes/Question.h"
#include <iostream>

Question::Question(const std::string &name, const int pointValue){
    this->name = name;
    this->pointValue = pointValue;
}

void Question::print() const {
    std::cout << name << std::endl;
    for (int i = 0; i < this->answers.size(); i++) {
        std::cout << " [" << (i + 1) << "]" << this->answers[i].name << std::endl;
    }
}

void Question::addAnswer(const std::string &answerName, const bool isCorrect) {
    //this->answers.push_back({answerName, isCorrect});
    Answer answer;
    answer.name = answerName;
    answer.isCorrect = isCorrect;
    answer.isSelected = false;
    this->answers.push_back(answer);
}
