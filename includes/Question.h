#ifndef QUESTION_H
#define QUESTION_H
#include <string>

class Question {
public:
    //Constructor and Deconstructor
    Question(std::string name, int pointValue);
    virtual ~Question() = default;

    //Functions
    void print();
    virtual void markAnswer(int answerNumber) = 0;

    //Getters
    virtual int getPoints() = 0;

private:
    std::string name;
    int pointValue;
};

#endif // QUESTION_H
