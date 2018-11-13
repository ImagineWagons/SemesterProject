#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

#include "Flashcard.h"

int main() {
	
	ifstream fin;
	const int NUM_QUESTIONS = 20;
	int numCorrectAnswers = 0;
	vector<Flashcard> flashcardVector(NUM_QUESTIONS);
	string stringbuf;
	char charbuf;
	string lineFromFile;
	

	fin.open("flashcards.txt");
	for (int i = 0; i < NUM_QUESTIONS; i++) {
		
		
		getline(fin, stringbuf);
		flashcardVector.at(i).SetQuestion(stringbuf);
		getline(fin, stringbuf);
		flashcardVector.at(i).SetAnswerA(stringbuf);
		getline(fin, stringbuf);
		flashcardVector.at(i).SetAnswerB(stringbuf);
		getline(fin, stringbuf);
		flashcardVector.at(i).SetAnswerC(stringbuf);
		getline(fin, stringbuf);
		flashcardVector.at(i).SetAnswerD(stringbuf);
		fin >> charbuf;
		flashcardVector.at(i).SetCorrectAnswer(charbuf);
		fin.ignore(1000, '\n'); //skip newline character
		fin.ignore(1000, '\n'); //skip 2nd newline character on blank line, maybe use seek to insert success rate here
		cout << flashcardVector.at(i).getQuestion() << endl;
		cout << flashcardVector.at(i).getAnswerA() << endl;
		cout << flashcardVector.at(i).getAnswerB() << endl;
		cout << flashcardVector.at(i).getAnswerC() << endl;
		cout << flashcardVector.at(i).getAnswerD() << endl << endl;

		if (flashcardVector.at(i).GetUserAnswer()) {
			numCorrectAnswers++;
		}
	}
	fin.close();
	cout << "You got " << numCorrectAnswers << " out of " << NUM_QUESTIONS << " questions correct." << endl;
	
	cin.ignore();
	return 0;
}