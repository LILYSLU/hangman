#include <iostream>
#include <vector>
#include "hangman_functions.h"


//define functions
void greet()
{
	std::cout << "::::::::::::::::::::::::::::\n";
	std::cout << "You're playing Hangman!!\n";
	std::cout << "::::::::::::::::::::::::::::\n";
	std::cout << "Guess the letters in the word before the man is hanged\n";

}

void display_misses(int misses) {
	if (misses == 0)
	{
		std::cout << "+----+\n";
		std::cout << "|    |\n";
		std::cout << "     | \n";
		std::cout << "     | \n";
		std::cout << "     | \n";
		std::cout << "  ======\n";


	}
	else if (misses == 1)
	{
		std::cout << "+----+ \n";
		std::cout << "|    | \n";
		std::cout << "0    | \n";
		std::cout << "     | \n";
		std::cout << "     | \n";
		std::cout << "  ======\n";

	}
	else if (misses == 2)
	{
		std::cout << " +----+ \n";
		std::cout << " |    | \n";
		std::cout << " 0    | \n";
		std::cout << "( )   | \n";
		std::cout << "      | \n";
		std::cout << "  ======\n";

	}

	else if (misses == 3)
	{
		std::cout << " +----+ \n";
		std::cout << " |    | \n";
		std::cout << " 0    | \n";
		std::cout << "( )   | \n";
		std::cout << " ll   | \n";
		std::cout << "   ======\n";
	}

	else if (misses == 4)
	{
		std::cout << "   +----+ \n";
		std::cout << "   |    | \n";
		std::cout << "   0    | \n";
		std::cout << " /( )\\  | \n";
		std::cout << "   ll   | \n";
		std::cout << "     ======\n";
	}
	
}

void display_status(vector<char> incorrect, string answer, int wrongGuessNum)
{
	
	cout << "Wrong guesses: \n";
	for(int i = 0; i < incorrect.size(); i++)
		{
		cout << incorrect[i] << " \n";
		}
	cout << "\nCodeword: \n";

	for (int i = 0; i < answer.length(); i++)
	{
		cout << answer[i] << " ";
	}

}
void end_game(string answer, string codeword) {
	if (answer == codeword)
	{
		cout << "the word was :" << codeword << "\n";
		cout << "Wow you saved the person! Great job\n";
	}
	else {
		 
		{
			std::cout << "     +----+ \n";
			std::cout << "     |    | \n";
			std::cout << "    XX    | \n";
			std::cout << " /(DEAD)\\ | \n";
			std::cout << "    LL    | \n";
			std::cout << "       ======\n";
			}
		cout << "YOU LOSE he died whoops\n\n" << "The Word was : " << codeword << "\n";

	}
}
void display_wrongGuessNum(int misses) {
	cout << "Number of Wrong guesses is : "<<misses<<"/5\n";
}
