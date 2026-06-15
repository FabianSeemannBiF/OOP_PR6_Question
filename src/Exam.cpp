#include "../includes/Exam.h"

Exam::Exam(){
    this->currentQuestionIndex = 0;
}

Exam::~Exam(){
    for (Question* question : this->questions) {
        delete question;
    }
    this->questions.clear();
}

Question* Exam::getCurrentQuestion() const {
    if (this->currentQuestionIndex < 0 || this->currentQuestionIndex >= this->questions.size()) {
        return nullptr;
    }
    return questions[this->currentQuestionIndex];
}

void Exam::addQuestion(Question* newQuestion){
    questions.push_back(newQuestion);
}


void Exam::nextQuestion(){
    this->currentQuestionIndex++;
}

int Exam::grade() const {
    int totalPoints = 0;
    for (Question* question : questions) {
        if (question != nullptr) {
            totalPoints += question->getPoints();
        }
    }
    return totalPoints;
}
