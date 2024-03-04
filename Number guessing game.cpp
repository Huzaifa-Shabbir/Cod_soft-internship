


// Task 3

#include <iostream>
#include<string>
#include<random>
#include<time.h>
using namespace std;

void main()
{
	char tries = 'y';
	int guess=200;
	srand(time( NULL));

	while (tries=='y' ||tries=='Y')
	{
		int difficulty;
		cout << "\n\nChose the Level of difficulty: ";
		cout << "\n1 for EASY \n2 for MEDIUM\n3 for HARD";
		cout << "\nEnter the level of difficulty: "; cin >> difficulty;
		while (difficulty != 1 && difficulty != 2 && difficulty != 3)
		{
			cout << "\nYou entered wrong input.";
			cout << "\nEnter the level of difficulty: "; cin >> difficulty;
		}

		if (difficulty == 1)
		{
			int Number = (rand() % 10) + 1;
			while (Number != guess)
			{
				cout << "\nGuess the number from 1-10: ";
				cin >> guess;
				if (guess > Number)
					cout << "\nYou guessed a higher number.";
				else if (Number == guess)
					cout << "\nCONGRTULATIONS!!!\nYou guessed Right!";
				else
					cout << "\nYou guessed a lower number.";
			}
		}
		if (difficulty == 2)
		{
			int Number = (rand() % 100) + 1;
			while (Number != guess)
			{
				cout << "\nGuess the number from 1-100: ";
				cin >> guess;
				if (guess > Number)
					cout << "\nYou guessed a higher number.";
				else if (Number == guess)
					cout << "CONGRTULATIONS!!!\nYou guessed Right!";
				else
					cout << "\nYou guessed a lower number.";
			}
		}
		if (difficulty == 3)
		{
			int Number = (rand() % 500) + 1;
			while (Number != guess)
			{
				cout << "\nGuess the number from 1-500: ";
				cin >> guess;
				if (guess > Number)
					cout << "\nYou guessed a higher number.";
				else if (Number == guess)
					cout << "CONGRTULATIONS!!!\nYou guessed Right!";
				else
					cout << "\nYou guessed a lower number.";
			}
		}
		cout << "\nDo you want to replay the game.\nEnter 'Y' for yes: ";
		cin >> tries;
	}

}