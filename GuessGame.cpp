// Name: Luke Womack
// Date: 10/13/22
// Program Title: GuessingGame.cpp
// Program Description: This program generates a random number between one and 100, and allows the user 10 guesses to 

#include <iostream>
#include <string>
#include <iomanip>

// Libraries that need to be included to generate the random number

#include <cstdlib>
#include <ctime>

using namespace std;

// Named constants

int main()
{
	// Variable Declaration

	int correct_num, guess;

	// Delcaring the loop counter as zero outside of the loop

	int numberOfGuesses = 0;

	// Generates a random number between 1 and 100
	
	srand(time(0));
	correct_num = rand() % 100;

	//Program title and description for the user

	cout << "Guessing Game!" << endl;
	cout << "This Program Generates a Random number between 0 and 100;" << endl;
	cout << "You have ten tries to guess the number correctly!\n\n\n" << endl;

	// While loop that iterates the whole program if the number of guesses are below 10
	while (numberOfGuesses != 10) {

		// User input

		cout << "Enter your guess: " << endl;
		cin >> guess;

		// DUMMY PROOFING

		if (!cin)
		{
			// This section prevents anybody from entering anything that isn't a whole number.
				// If anything besides a whole number is entered, the program will terminate

			cout << "WHOLE NUMBERS ONLY! Program terminating! Try again!" << endl;

			return 1;
		}
		// This loop keeps people from entering numbers outside of the range the program can handle
		if (guess < 0 || guess > 100)
		{
			cout << "Invalid input!" << endl;
			cout << "The random number is between 0 and 100!, try again!" << endl;
		}

		// These loops are for informing the user if their guess is higher or lower than the actual value
		if (guess > correct_num)
		{
			cout << "Your guess is larger than the correct number. Try again!" << endl;
		}
		else if (guess < correct_num)
		{
			cout << "Your guess is smaller than the correct number. Try again!" << endl;
		}
		// This loop lets the user know if the guessed the number correctly
		else if (guess == correct_num)
		{
			cout << "You guessed the number correctly! Good Job!" << endl;
			// Breaks out of the loop if the number is guessed correctly
			break;
		}
		// increasing the loop counter at the end of the while loop
		numberOfGuesses++;
	}
	while (numberOfGuesses == 10)
	{
		cout << "You ran out of guesses! The correct number was: " << correct_num << endl;
		// Breaks out of the loop so it doesn't infinitely display this message
		break;
	}
	return 0;
}