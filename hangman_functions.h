#include <iostream>
#include <vector>


//declare functions
using namespace std;

void greet();
void display_misses(int misses);
void display_status(vector<char> incorrect, string answer, int guessNum);
void end_game(string answer, string codeword);
void display_wrongGuessNum(int misses);
char lowerChar(char x);
string lowerString(string x);