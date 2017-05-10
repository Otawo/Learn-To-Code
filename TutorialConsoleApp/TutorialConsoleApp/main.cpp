#include <stdio.h> //Print read puts commands
#include <stdlib.h> //Random stuff code
#include <time.h> //Time based code
#include <string> // string related commands
#include <iostream>

using namespace std;

int main()
{
	int num = 0, numGuess = 0, numCount = 0;
	int const num1 = 0;
	int const num2 = 10;

	srand(time(NULL));

	num = rand() % num2 + num1;

	do {
		cout << "Guess the number between 0 & 10 : ";
		cin >> numGuess;
		numCount++;

		if (num > numGuess)
			cout << "TOO LOW! \n\n";
		else if (num < numGuess)
			cout << "TOO HIGH!! \n\n";
		else
			cout << "CORRECT!! You got it in " << numCount << " guesses!\n";

	} while (num != numGuess);


	return 0;
}