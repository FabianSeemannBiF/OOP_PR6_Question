//
// Created by Fabian on 6/15/26.
//

#ifndef OOP_PR6_QUESTION_SINGLECHOISEQUESTION_H
#define OOP_PR6_QUESTION_SINGLECHOISEQUESTION_H
#include "Question.h"

class SingleChoiceQuestion : public Question {
public:
    //Constructor and Deconstructor
    SingleChoiceQuestion();
    ~SingleChoiceQuestion() override = default;

    //Functions
    void markAnswer(int answerNumber) override;

    //Getters
    int getPoints() override;
private:
};

#endif //OOP_PR6_QUESTION_SINGLECHOISEQUESTION_H
