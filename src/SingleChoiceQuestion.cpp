//
// Created by Fabian on 6/15/26.
//
#include "../includes/SingleChoiceQuestion.h"

#include <iostream>

SingleChoiceQuestion::SingleChoiceQuestion(const std::string &name, const int pointValue) : Question(name, pointValue) {}

void SingleChoiceQuestion::markAnswer(const int answerNumber) {

    const int index = answerNumber - 1;

    if (index < 0 || index >= this->answers.size()) {
        throw std::invalid_argument("Question index out of range");
    }

    for (Answer& answer : this->answers) {
        if (answer.isSelected) {
            throw std::logic_error("Question selected");
        }
    }

    this->answers[index].isSelected = true;
}

int SingleChoiceQuestion::getPoints() {
    for (const Answer& answer : this->answers) {
        if (answer.isSelected && answer.isCorrect) {
            return this->pointValue;
        }
    }
    return 0;
}
