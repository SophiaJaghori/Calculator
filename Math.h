#pragma once
#include <iostream>
/*
* Math.h
* Hameeda Jaghori
* CIS 554-M401 Object Oriented Programming in C++
* Syracuse University
* 2/22/2022
* exercises 6.57 - 6.61
*  *------------------Program Description--------------*
* Welcome to the computer Math. This program will help you learn your Multiplicaion
* faster and better.
*
*/
class MathPractice {
public:
	MathPractice(int, int);// construtor that takes two parameters
	void setNum1(int);// sets the number1 as void and takes one parameter as integer
	void setNum2(int);// sets the number2 as void and takes one parameter as integer
	void setResult(int);// sets the value of number1 and number2
	void setUserAnswer(int);// sets the value that user enters
	void setElementaryLevelAddition();// sets the elementary level function for addition problems
	void setElementaryLevelSubtruction();// sets the elementary level function for subtruction problems
	void setElementaryLevelMultiplication();// sets the elementary level multiplication problem
	
	void setResponseToCorrect(int);// sets the function that gives different response to the user for correct answers
	void setResponseToWrong(int);// sets the function that gives different response to the user for wrong answers
	int getNum1();// gets number1
	int getNum2();// gets number2
	int getResult();// gets result
	int getUserAnswer();//gets user answer
	void setIntermediateLevelSubtruction();// sets the Intermediate level function for addition problems
	void setIntermediateLevelMultiplication();// sets the Intermediate level function for addition problems
	void setIntermediateLevelAddition();//sets the intermediate level function for addition problems

	void setAdvanceLevelAddition();//sets the advanced level function for addition problems
	void setAdvanceLevelSubtruction();//sets the advanced level function for subtruction problems
	void setAdvanceLevelMultiplication();//sets the advanced level function for multiplication problems
private:
	int num1;// initializes number1 as private variable
	int num2;// initializes number as private variable
	int result;// resul of the two numbers
	int userAnswer;// the user answer variable

};



