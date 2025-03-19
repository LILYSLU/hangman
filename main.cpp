#include <iostream>
#include <vector>
#include "hangman_functions.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	greet();
	std::vector<std::string> wordsTravel = { "packing", "airplane", "helicopter", "suitcase", "tropical","sunglasses"};
	std::vector<std::string> wordsFood = { "dragonfruit", "pineapple", "meatloaf","pizza","strawberry","blueberry"};
	std::vector<std::string> wordsSchool = { "history", "backpack", "finals","coding","notebook"};

	string category;
	cout << "Which category would you like to play? Travel, Food, or School?";
	cin >> category;
	category = lowerString(category);
	string codeword;


	if (category == "travel") {
		codeword = wordsTravel[rand() %wordsTravel.size()];
	}
	if (category == "school") {
		codeword = wordsSchool[rand() %wordsSchool.size()];
	}
	if (category == "food") {
		codeword = wordsFood[rand() %wordsFood.size()];
	}

	std::string answer(codeword.length(), '_');



	int misses = 0;
	vector<char> incorrect;
	bool guess = false;
	char letter;
	char newLetter;
	int wrongGuessNum = 0;
	vector<char> repeated;
	std::string guessedLetters;



	while (answer != codeword && misses < 5) {
		display_wrongGuessNum(misses);
		display_misses(misses);

		display_status(incorrect, answer, misses);

		cout << "\n\nEnter Your Guess: ";
		cin >>letter;
		letter = lowerChar(letter);
		guessedLetters += letter;




		/*
		if (guessedLetters.find(letter) != std::string::npos) {
			std::cout << "you already guessed that... try another letter maybe itll be right  \n";
			continue;
		*/

		for (int i = 0; i < codeword.length(); i++)
		{
			if (letter == codeword[i]) {
				answer[i] = letter;
				guess = true;
			}
		}
		if (guess)
		{
			cout << "\n\n You Got One!! \n\n";
		}
		else
		{
			cout << " \n\nWRONG yikes.\n\n";
			incorrect.push_back(letter);
			repeated.push_back(letter);
			misses++;

		}
		guess = false;

	}
	string playAgain;

	end_game(answer, codeword);
	


}
char lowerChar(char x){

	if (x >= 'A'&& x<='Z'){
		x = x + 32;
	}
	return x;
}
std::string lowerString(std::string x) {
	for (int i = 0; i < x.length(); i++) {
		x[i] = lowerChar(x[i]);
	}
	return x;
}