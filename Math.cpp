

#include <iostream>
#include <string>
#include "Math.h"
using std::cin;
using std::cout;
using std::endl;
/*
* Math.cpp
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

MathPractice::MathPractice(int n1, int n2) {// constructor that takes two parameters
	setNum1(n1);
	setNum2(n2);

}

// sets the number n1
void MathPractice::setNum1(int n1) {
	num1 = n1;
}
//sets the number2 to n2
void MathPractice::setNum2(int n2) {
	num2 = n2;

}
//sets the result for two random numbers
void MathPractice::setResult(int res) {
	result = res;
}
//sets the answer from the user
void MathPractice::setUserAnswer(int ans) {
	userAnswer = ans;
}//gets the value of number1 and returns it 
int MathPractice::getNum1() {
	return num1;
}
//gets the value of number2 and returns it
int MathPractice::getNum2() {
	return num2;
}
// returns the result
int MathPractice::getResult() {
	return result;
}
// returns the userAnswer
int MathPractice::getUserAnswer() {
	return userAnswer;
}
//creates a function that takes a number as a parameter and sets the number 
// to 4 random numbers and those random numbers prints the message to the user
// if they answer correctly
void MathPractice::setResponseToCorrect(int n) {
	n = rand() % 4 + 1;
	switch (n)
	{
		// if it is 1, it will print very good message
	case 1:
		cout << "very Good! ";
		break;
		//if it random number is 2 it will print Excellent
	case 2:
		cout << "Excellent! ";
		break;
		// in if random number is 3 it will print nice work for the user
	case 3:
		cout << "Nice Work!";
		break;
		//if it is 4 the program will print Keep up the good work.
	case 4:
		cout << "Keep up the good work!";
		break;

	}

}
// this function is used when the user gives the wrong answer
// it takes a number as a parameter and randomly chooses the message
void MathPractice::setResponseToWrong(int n) {
	n = rand() % 4 + 1;
	switch (n)
	{
		//case 1  if the random number is 1
	case 1:
		cout << "no. Please try again. ";
		break;
		// in case 2 if the random number is 2
	case 2:
		cout << "Wrong. try once more! ";
		break;
		//case three if the random number is 3
	case 3:
		cout << "Dont give up!";
		break;
	case 4:
		//case 4 if the random number is 4
		cout << "No. Keep trying";
		break;

	}

}
// Function that is set to create the equetion for the basic level students
void MathPractice::setElementaryLevelAddition() {
	/*int result, n1, n2, userAnswer;*/
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 9 + 1; // sets the value for number1 using random function from 1 to 9
		num2 = rand() % 9 + 1; // sets the value for number1 using random function from 1 to 9
		while (1) {
			cout << " How much is " << num1 << " + " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 + num2;


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;

			}


		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You are ready for the next level!" << endl;
			setIntermediateLevelAddition();


		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
		
	}


}

// Function that is set to create the equetion for the basic level students
void MathPractice::setElementaryLevelSubtruction() {
	/*int result, n1, n2, userAnswer;*/
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 9 + 1; // sets the value for number1 using random function from 1 to 9
		num2 = rand() % 9 + 1; // sets the value for number1 using random function from 1 to 9
		while (1) {
			cout << " How much is " << num1 << " - " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 - num2;
			


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				
				
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;
				

			}


		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You are ready for the next level!"<<endl;
			setIntermediateLevelSubtruction();


		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
		
		
	}


}

// Function that is set to create the equetion for the basic level students
void MathPractice::setElementaryLevelMultiplication() {
	/*int result, n1, n2, userAnswer;*/
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 9 + 1; // sets the value for number1 using random function from 1 to 9
		num2 = rand() % 9 + 1; // sets the value for number1 using random function from 1 to 9
		while (1) {
			cout << " How much is " << num1 << " times " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 * num2;
			

			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;

			}

			
		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You are ready for the next level!" << endl;
			setIntermediateLevelMultiplication();


		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
		
	}

	
}
		

// Function that is set to create the equetion for the basic level students
void MathPractice::setIntermediateLevelAddition() {
	/*int result, n1, n2, userAnswer;*/
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 99; // sets the value for number1 using random function from 1 to 9
		num2 = rand() % 99; // sets the value for number1 using random function from 1 to 9
		while (1) {
			cout << " How much is " << num1 << " + " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 + num2;


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;

			}


		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You are ready for the next level!" << endl;
			setAdvanceLevelAddition();

			


		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
		
	}


}
// Function that is set to create the equetion for the basic level students
void MathPractice::setIntermediateLevelSubtruction() {
	/*int result, n1, n2, userAnswer;*/
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 99; // sets the value for number1 using random function from 1 to 9
		num2 = rand() % 99; // sets the value for number1 using random function from 1 to 9
		while (1) {
			cout << " How much is " << num1 << " - " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 - num2;


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;

			}


		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You are ready for the next level!" << endl;
			setAdvanceLevelSubtruction();




		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
		
	}


}


void MathPractice::setIntermediateLevelMultiplication() {
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;


	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 99; // sets the value for number1 using random function from 1 to 99
		num2 = rand() % 99; // sets the value for number1 using random function from 1 to 99
		while (1) {
			cout << " How much is " << num1 << " times " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 * num2;


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;

			}

			
		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You are ready for the next level!" << endl;
			setAdvanceLevelMultiplication();




		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
	}
	

}
void MathPractice::setAdvanceLevelAddition() {
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 999; // sets the value for number1 using random function from 1 to 999
		num2 = rand() % 999; // sets the value for number1 using random function from 1 to 999
		while (1) {
			cout << " How much is " << num1 << " + " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 + num2;// adds the two random numbers and stores it in to the reslul


			if (result == userAnswer) {// checks if the result for the added number is the same with the user anser
				setResponseToCorrect(rand() % 4 + 1);// calls the function for correct answers

				cout << endl;// ends the line and takes to the second line
				right++; // adds 1 the right answer 
				break;

			}
			else { // if the answer is wrong take to this fucntion
				setResponseToWrong(rand() % 4 + 1);// calls the function for the wrong answers
				cout << endl;
				wrong++;

			}

			
		}
		// condition that checks if the user has answerd 10 equetions correctly
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You mastered the third level addition!" << endl;
			break;// stops the loop;



		}
		// checks if the user has answerd more than 75 percents
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl; // askes the user to get more help from the teacher
			break;
		}
	}

}
void MathPractice::setAdvanceLevelSubtruction() {
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 999; // sets the value for number1 using random function from 1 to 999
		num2 = rand() % 999; // sets the value for number1 using random function from 1 to 999
		while (1) {
			cout << " How much is " << num1 << " - " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 - num2;


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;
				right++;
				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;
				wrong++;
				if (wrong * 10 > 75) {
					cout << "you answerd " << wrong << " times " << "wrong" << endl;
					cout << "Please ask your teacher for extra help!" << endl;
					break;
				}
				

			}
		

		
		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You mastered the third level subtruction!" << endl;
			break;

		}
		

	}

}
void MathPractice::setAdvanceLevelMultiplication() {
	int right = 0; // variabl that is used to count right answers
	int wrong = 0; // varoable that is used to count wrong ansser
	//int count = 0; // take care of how many times did the user aksed for an equetion.
	int userAnswer;
	int num1;
	int num2;
	int result;

	while (1) {
		srand((unsigned)time(0));// to generate random values
		num1 = rand() % 999; // sets the value for number1 using random function from 1 to 999
		num2 = rand() % 999; // sets the value for number1 using random function from 1 to 999
		while (1) {
			cout << " How much is " << num1 << " times " << num2 << "? "; // prompts the user for an equetion
			cin >> userAnswer; // sets the user answer
			result = num1 * num2;


			if (result == userAnswer) {
				setResponseToCorrect(rand() % 4 + 1);

				cout << endl;

				break;

			}
			else {
				setResponseToWrong(rand() % 4 + 1);
				cout << endl;

			}

		
		}
		if (right == 10) {
			cout << "your answerd " << right << " times " << "correctly" << endl;
			cout << " Yey! You mastered the third level Multiplication!" << endl;
			break;




		}
		if (wrong * 10 > 75) {
			cout << "you answerd " << wrong << " times " << "wrong" << endl;
			cout << "Please ask your teacher for extra help!" << endl;
			break;
		}
	}

}
