#include <iostream>
#include "basicOperations.h"

// first the program asks how many number to operate
// then asks for the kind of operation
// calculates
// prints result

int result{ 0 }; //declared once just to avoid multiple declarations - global variable

extern int amountOfNumbers; //these variable refers to amount of numbers to be operated
extern int operationType; //gets the kind of math operation from mathOperation.cpp

//for myself to remember: amountOfNumbers and operationType are declared in their respective files
//and are "extern" here to be used in this file.
//it just says to the compiler: "Hey, these variables already exists in another file, just use them here"

int calcResult() {
	if (operationType == 1) {

		std::cout << "You chose Sum. Enter " << amountOfNumbers << " numbers: \n";

		for (int i = 0; i < amountOfNumbers; i++) {
			int number;
			std::cout << "Enter number " << i + 1 << ": ";
			std::cin >> number;
			result += number;
		}
		std::cout << "The sum of those numbers is: " << result << '\n';
		return result;
	}
	else if (operationType == 2) {
		std::cout << "You chose Subtraction. Enter " << amountOfNumbers << " numbers: \n";

		for (int i = 0; i < amountOfNumbers; i++) {
			int number;
			std::cout << "Enter number " << i + 1 << ": ";
			std::cin >> number;
			result -= number;
		}
		std::cout << "The subtraction of those numbers is: " << result << '\n';
		return result;
	}
	else if (operationType == 3) {
		std::cout << "You chose Multiplication. Enter " << amountOfNumbers << " numbers: \n";

		result = 1; //result starts at 1 to avoid multiplying by 0
		for (int i = 0; i < amountOfNumbers; i++) {
			int number;
			std::cout << "Enter number " << i + 1 << ": ";
			std::cin >> number;
			result *= number;
		}
		std::cout << "The Multiplication of those numbers is: " << result << '\n';
		return result;
	}
	else if (operationType == 4) {
		std::cout << "You chose Division. Enter " << amountOfNumbers << " numbers: \n";

		for (int i = 0; i < amountOfNumbers; i++) {
			int number;
			std::cout << "Enter number " << i + 1 << ": ";
			std::cin >> number;
			result /= number;

			if (i == 0) {
				result = number; // The first number is the initial value
			}
			else if (number != 0) {
				result /= number;
			}
			else {
				std::cout << "You can't divide by 0. The result will be 0\n";
				return 0;
			}
			std::cout << "The Division of those numbers is: " << result << '\n';
			return result;
		}
	}

	//handles out of range options like negative numbers or numbers greater than 4 (maybe even letters)
	else {
		std::cout << "INVALID OPTION YOUR PC IS GOING TO EXPLODE";
		return 404;
	}
}