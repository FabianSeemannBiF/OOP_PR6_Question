#ifndef EXAM_H
#define EXAM_H
#include <vector>
#include "Question.h"


class Exam{
    public:
        Exam();
        ~Exam();
        Question* getCurrentQuestion();
        void addQuestion(Question* newQuestion);
        void nextQuestion();

    private:
        std::vector<Question*> questions;
};

#endif // EXAM_H
