#include <iostream>
#include <string>

using namespace std;


void PrintIntro();
string GetGuessAndPrintBack();

// Entry point to application
int main()
{
	
	PrintIntro();

	//loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++)
	{
		GetGuessAndPrintBack();
		cout << endl;
	}
	return 0;
}

//introduce the game
void PrintIntro()
{
	
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows,a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

// get a guess from the player
string GetGuessAndPrintBack()
{
	string Guess = "";
	cout << "Please enter your guess: ";
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}