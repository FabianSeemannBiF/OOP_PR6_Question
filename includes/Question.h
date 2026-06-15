#ifndef QUESTION_H
#define QUESTION_H
#include <string>
#include <vector>

struct Answer {
    std::string name;
    bool isCorrect;
    bool isSelected;
};

class Question {
public:
    //Constructor and Deconstructor
    Question(const std::string &name, int pointValue);
    virtual ~Question() = default;

    //Functions
    void print() const;
    virtual void markAnswer(int answerNumber) = 0;
    void addAnswer(const std::string &answerName, bool isCorrect);

    //Getters
    virtual int getPoints() = 0;
protected:
    std::vector<Answer> answers;
    int pointValue;
private:
    std::string name;
};

#endif // QUESTION_H
