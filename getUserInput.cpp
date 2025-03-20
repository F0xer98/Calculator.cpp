#include <iostream>
#include "basicOperations.h" //header file containing forward declarations

int amountOfNumbers{}; // global variable to be used in other functions - holds the amount of numbers to be operated

int getUserInput() {
	std::cout << "How many numbers to operate?: " << '\n';
	std::cin >> amountOfNumbers;

	return amountOfNumbers;
}