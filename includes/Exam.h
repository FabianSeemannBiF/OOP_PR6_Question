#ifndef EXAM_H
#define EXAM_H
#include <vector>
#include "Question.h"


class Exam {
public:
    //Constructor and Deconstructor
    Exam();
    ~Exam();

    //Functions
    Question *getCurrentQuestion() const;
    void addQuestion(Question *newQuestion);
    void nextQuestion();
    int grade() const;

private:
    std::vector<Question *> questions;
    int currentQuestionIndex;
};

#endif // EXAM_H
