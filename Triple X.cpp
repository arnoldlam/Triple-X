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
	std::cout << "+ The codes multiply to give " << SecretNumberProduct << std::endl << std:: endl;

	int GuessA, GuessB, GuessC; 

	std::cout << "Please guess the three numbers, seperated by a space: "; 
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	std::cout << std::endl << "You've entered: " << GuessA << ", " << GuessB << ", " <<GuessC << std::endl << std::endl; 

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC; 

	if (GuessSum == SecretNumberSum && GuessProduct == SecretNumberProduct) {
		std::cout << "You win!";
	}
	else {
		std::cout << "You lose.";
	}

	std::cout << std::endl;

	return 0; 
}