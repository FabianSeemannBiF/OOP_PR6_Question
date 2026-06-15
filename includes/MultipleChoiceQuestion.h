//
// Created by Fabian on 6/15/26.
//

#ifndef OOP_PR6_QUESTION_MULTIPLECHOISEQUESTION_H
#define OOP_PR6_QUESTION_MULTIPLECHOISEQUESTION_H
#include "Question.h"

class MultipleChoiceQuestion : public Question {
public:
    //Constructor and Deconstructor
    MultipleChoiceQuestion(std::string &name, int pointValue);
    ~MultipleChoiceQuestion() override = default;

    //Functions
    void markAnswer(int answerNumber) override;

    //Getters
    int getPoints() override;
};

#endif //OOP_PR6_QUESTION_MULTIPLECHOISEQUESTION_H
