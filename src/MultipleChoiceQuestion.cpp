//
// Created by Fabian on 6/15/26.
//
#include "../includes/MultipleChoiceQuestion.h"

#include <stdexcept>

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string &name, const int pointValue) : Question(name, pointValue) {}

void MultipleChoiceQuestion::markAnswer(const int answerNumber) {
    const int index = answerNumber - 1;

    if (index < 0 || index >= this->answers.size()) {
        throw std::invalid_argument("Question index out of bounds");
    }

    this->answers[index].isSelected = true;
}

int MultipleChoiceQuestion::getPoints() {
    int totalPoints = 0;
    for (const Answer &answer : this->answers) {
        if (answer.isSelected && answer.isCorrect) {
            totalPoints += this->pointValue;
        } else if ((answer.isSelected && !answer.isCorrect) || (!answer.isSelected && answer.isCorrect)) {
            totalPoints -= this->pointValue;
        }
    }

    if (totalPoints < 0) {
        totalPoints = 0;
    }

    return totalPoints;
}
