// Triple X.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() { 

	// Print welcome messages to the terminal
	std::cout << "You are at a mysterious alien vault hiding treasures from a great past civilization" << std::endl;
	std::cout << "Enter the correct glyphs to continue..." << std::endl << std::endl;
	
	// Declare 3 number code
	int SecretNumber1 = 1;
	int SecretNumber2 = 2;
	int SecretNumber3 = 5;

	int SecretNumberSum = SecretNumber1 + SecretNumber2 + SecretNumber3;
	int SecretNumberProduct = SecretNumber1 * SecretNumber2 * SecretNumber3;

	std::cout << "+ There are 3 numbers in the code" << std::endl;
	std::cout << "+ The codes add up to " << SecretNumberSum << std::endl;
	std::cout << "+ The codes multiply to give " << SecretNumberProduct << std::endl;

	int PlayerGuess; 

	return 0; 
}