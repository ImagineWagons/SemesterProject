
#ifndef FLASHCARD_H
#define FLASHCARD_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class Flashcard
{
public:
	Flashcard();
	~Flashcard();
	void SetQuestion(string buf);
	void SetAnswerA(string buf);
	void SetAnswerB(string buf);
	void SetAnswerC(string buf);
	void SetAnswerD(string buf);
	void SetCorrectAnswer(char buf);
	ifstream fin;
	//READ FROM FILE
	
	bool GetUserAnswer();
	//RETURN PRIVATE VARIABLES
	string getQuestion() {return this->question; }
	string getAnswerA() { return this->answerA; }
	string getAnswerB() { return this->answerB; }
	string getAnswerC() { return this->answerC; }
	string getAnswerD() { return this->answerD; }
	char getCorrectAnswer() { return this->correctAnswer; }
private:
	string question;
	string answerA;
	string answerB;
	string answerC;
	string answerD;
	char correctAnswer;
};
//TODO: add fields to gauge success rate
//TODO: write success rate to file, read success rate

//TODO: write code to randomly shuffle all 20, select 5 of 20 Flashcard objects
//TODO: set selection chance to be based on success rate.

//TODO: write code to add a flashcard to the back of the list, get user input and format it
//TODO: write code to delete a specific flashcard, would probably involve writing all other flashcards to a new file
#endif