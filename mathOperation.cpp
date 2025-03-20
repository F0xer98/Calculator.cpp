#include <iostream>
#include "basicOperations.h"

int operationType{}; //another global variable to be used in other functions, holds the kind of operation

int mathOperation() {

	std::cout << "Type what kind of operation you want to make: " << '\n' <<
		"1- Sum" << '\n' <<
		"2- Subtraction" << '\n' <<
		"3- Multiplication" << '\n' <<
		"4- Division" << '\n';

	std::cin >> operationType;
	return operationType;
}