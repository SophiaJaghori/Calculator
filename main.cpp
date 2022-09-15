#include <iostream>
#include "Math.h"
using std::cin;
using std::cout;
using std::endl;

/*
* Main.cpp
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in C++
* Syracuse University
* 2/19/2022
* exercises 6.57 - 6.61
*  *------------------Program Description--------------*
* Welcome to the computer Math. This program will help you learn your Multiplicaion
* faster and better.
*
*/

int main() {
	cout << "  |*********************************************|" << endl;
	cout << "  |welcome to the math Problems equetions!      |" << endl;
	cout << "  | With this program you will master your Math.|"<<endl;
	cout << "  |*********************************************|" << endl;
	int choice;
	cout << "please choose your level." << endl;
	cout << "for elementary choos 1." << endl;
	cout << "for medium choose 2." << endl;
	cout << "for hard choose 3:" << endl;
	cin >> choice;


	int result, answer;

	MathPractice math(rand() % 9 + 1, rand() % 9 + 1);
	math.getNum1();
	math.getNum2();
	if (choice == 1) {
		int pick;
		cout << "for addition choose 1 :";
		cout << "for subtruction choose 2: ";
		cout << " for multiplication choos3 ";
		cin >> pick;
		if (pick == 1) {
			math.setElementaryLevelAddition();
		}
		else if (pick == 2) {
			math.setElementaryLevelSubtruction();
		}
		else if (pick == 3) {
			math.setElementaryLevelMultiplication();

		}
		else {
			cout << "wrong choice";
		}
		

	}
	else if (choice == 2) {
		int pick;
		cout << "for addition choose 1 :";
		cout << "for subtruction choose 2: ";
		cout << " for multiplication choos3 ";
		cin >> pick;
		if (pick == 1) {
			math.setIntermediateLevelAddition();
		}
		else if (pick == 2) {
			math.setIntermediateLevelSubtruction();
		}
		else if (pick == 3) {
			math.setIntermediateLevelMultiplication();;

		}
		else {
			cout << "wrong choice";
		}
		
	}
	else if (choice == 3) {
		int pick;
		cout << "for addition choose 1 :";
		cout << "for subtruction choose 2: ";
		cout << " for multiplication choos3 ";
		cin >> pick;
		if (pick == 1) {
			math.setAdvanceLevelAddition();
		}
		else if (pick == 2) {
			math.setAdvanceLevelSubtruction();
		}
		else if (pick == 3) {
			math.setAdvanceLevelMultiplication();

		}
		else {
			cout << "wrong choice";
		}
		
	}
	else {
		cout << "you chose a wrong number!\n please try 1 - 3";
	}
}
