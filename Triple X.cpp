// Triple X.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Print welcome messages to the terminal
void PrintIntroduction(int LevelDifficulty) 
{
	std::cout << "You are at a mysterious alien vault hiding level " << LevelDifficulty << " treasures from a great past civilization" << std::endl;
	std::cout << "Enter the correct glyphs to continue..." << std::endl << std::endl;
}

bool StartGame(int LevelDifficulty, int SecretNumber1, int SecretNumber2, int SecretNumber3)
{	
	PrintIntroduction(LevelDifficulty);
	
	int SecretNumberSum = SecretNumber1 + SecretNumber2 + SecretNumber3;
	int SecretNumberProduct = SecretNumber1 * SecretNumber2 * SecretNumber3;

	std::cout << "+ There are 3 numbers in the code" << std::endl;
	std::cout << "+ The codes add up to " << SecretNumberSum << std::endl;
	std::cout << "+ The codes multiply to give " << SecretNumberProduct << std::endl << std::endl;

	int GuessA, GuessB, GuessC;

	std::cout << "Please guess the three numbers, seperated by a space: ";
	std::cin >> GuessA >> GuessB >> GuessC; 

	std::cout << std::endl << "You've entered: " << GuessA << ", " << GuessB << ", " << GuessC << std::endl << std::endl;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;
	
	return (GuessSum == SecretNumberSum && GuessProduct == SecretNumberProduct);
}



int main() 
{ 
	bool bLevelComplete; 
	int SecretNumber1, SecretNumber2, SecretNumber3;

	int LevelDifficulty = 1;
	const int MaxDifficulty = 9; 
	
	while (LevelDifficulty <= MaxDifficulty)
	{
		// Declare 3 number code
		SecretNumber1 = rand() % LevelDifficulty + 1;
		SecretNumber2 = rand() % LevelDifficulty + 1;
		SecretNumber3 = rand() % LevelDifficulty + 1;
		
		bLevelComplete = StartGame(LevelDifficulty, SecretNumber1, SecretNumber2, SecretNumber3);

		if(bLevelComplete) 
		{
			std::cout << "You unlocked a door. Keep going!";
			
			// Increase the difficulty level
			LevelDifficulty++;

			// Re-roll the three numbers
			SecretNumber1 = rand() % LevelDifficulty + 1;
			SecretNumber2 = rand() % LevelDifficulty + 1;
			SecretNumber3 = rand() % LevelDifficulty + 1;
		}
		else 
		{
			std::cout << "Please try again.";
		}
		
		std::cout << std::endl << std::endl;	
	}

	std::cout << "You've opened the vault and obtained the treasure!";
	std::cout << std::endl;

	return 0;
}

