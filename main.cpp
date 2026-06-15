#include <iostream>
#include "../includes/Exam.h"
#include "../includes/Question.h"
#include "../includes/SingleChoiceQuestion.h"
#include "../includes/MultipleChoiceQuestion.h"


int main(){
    using namespace std;

    int input = 0;
    // Test Setup
    Exam finalExam;


    //Uncomment this to generate an exam
    Question* temp = nullptr;
    temp = new SingleChoiceQuestion("Single1", 1);
    temp->addAnswer("Antwort 1 (richtig)", true);
	temp->addAnswer("Antwort 2", false);
	finalExam.addQuestion(temp);

    temp = new MultipleChoiceQuestion("Multi1", 1);
    temp->addAnswer("Antwort 1(richtig)", true);
	temp->addAnswer("Antwort 2", false);
	finalExam.addQuestion(temp);

	temp = new SingleChoiceQuestion("Single2", 1);
    temp->addAnswer("Antwort 1(richtig)", true);
	temp->addAnswer("Antwort 2", false);
	temp->addAnswer("Antwort 3", false);
	finalExam.addQuestion(temp);

    temp = new MultipleChoiceQuestion("Multi2", 1);
    temp->addAnswer("Antwort 1(richtig)", true);
	temp->addAnswer("Antwort 2", false);
	temp->addAnswer("Antwort 3(richtig)", true);
	temp->addAnswer("Antwort 4", false);
	finalExam.addQuestion(temp);


    // Test Start
    cout << "Willkommen zum Abschlusstest!" << endl;


    //Uncomment this to test your code
    while(finalExam.getCurrentQuestion() != nullptr){
        Question* currentQuestion = finalExam.getCurrentQuestion();
        currentQuestion->print();
        do{
        	if (!(cin >> input)) {
        		cin.clear();
        		cin.ignore(10000, '\n');
        		cout << "Bitte geben Sie eine gueltige Zahl ein!" << endl;
        		continue;
        	}

        	if(input != 0){
        		try {
        			currentQuestion->markAnswer(input);
        		}
        		catch (const std::invalid_argument& e) {
        			cout << "Eingabefehler: " << e.what() << endl;
        		}
        		catch (const std::logic_error& e) {
        			cout << "Logikfehler: " << e.what() << endl;
        		}
        		catch (const std::exception& e) {
        			cout << "Allgemeiner Fehler: " << e.what() << endl;
        		}
        	}
        }
        while(input != 0);
        finalExam.nextQuestion();
    }

    cout << "Sie haben " << finalExam.grade() << " Punkte erreicht" << endl;

    return 0;
}
