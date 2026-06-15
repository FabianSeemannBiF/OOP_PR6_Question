#ifndef QUESTION_H
#define QUESTION_H
#include <string>

class Question{
    public:
        Question(std::string name, int pointValue);
        void print();

    private:
        std::string name;
        int pointValue;
};

#endif // QUESTION_H
