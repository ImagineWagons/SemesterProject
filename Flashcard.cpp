#include "Flashcard.h"



Flashcard::Flashcard()
{
	cout << "object constructed" << endl;
}


Flashcard::~Flashcard()
{
	cout << "object deconstructed" << endl;
}
void Flashcard::SetQuestion(string buf) {
	this->question = buf;
}
void Flashcard::SetAnswerA(string buf){
	this->answerA = buf;
}
void Flashcard::SetAnswerB(string buf){
	this->answerB = buf;
}
void Flashcard::SetAnswerC(string buf){
	this->answerC = buf;
}
void Flashcard::SetAnswerD(string buf){
	this->answerD = buf;
}
void Flashcard::SetCorrectAnswer(char buf){
	this->correctAnswer = buf;
}


bool Flashcard::GetUserAnswer() {
	char userAnswer;
	cout << "Please enter A, B, C, or D to answer the question: ";
	cin >> userAnswer;
	cin.ignore(1000, '\n');
	cout << "You entered " << userAnswer << endl;
	if (toupper(userAnswer) != this->getCorrectAnswer()){
		cout << "Sorry, but the correct answer was " << this->getCorrectAnswer() << endl;
		return false;
	}
	else {
		cout << "Correct!" << endl;
		return true;
	}
}