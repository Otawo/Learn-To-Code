// HelloSFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	char answer = 'b';

	int playerHealth = 100;
	int playerAmmo = 25;
	int playerMag = 5;

	int enemyHealth = 100;
	int enemyMag = 5;

	bool cont = true;

	do {
		if (answer == 'b')
		{
			if (playerMag > 1 && playerAmmo >= 1)
			{
				cout << "\nPlayer health: " + playerHealth;
				cout << "\nAmmo: " + playerAmmo;
				cout << "\nMagazine: " + playerMag;
				cout << "\nPress 1 to shoot:\n";
				cout << "\nPress 2 to defend:\n";
				cout << "\nPress 3 to reload:\n";
				cin >> answer;

				switch (answer)
				{
				case '1':
					enemyHealth -= rand() % 25 + 5;
					answer = 'b';
					playerMag--;
					break;
				case '2':
					playerHealth += 10;
					answer = 'b';
					break;
				case 3:
					playerAmmo = playerAmmo - (5 - playerMag);
					answer = 'b';
					break;
				default:
					break;
				}
			}

			if (enemyHealth >= 1 && enemyMag >= 1) {
				playerHealth -= rand() % 25 + 5;
				enemyMag--;
			}
			else if (playerHealth >= 1)
			{
				enemyMag = 5;
			}

			if (playerHealth >= 1) {
				cont = true;
			}
			else
			{
				cout << "\nPlayer health is: " + playerHealth;
				cout << "\nEnemy health is: " + enemyHealth;
				cout << "\nDo you want to continue?\n";
				cin >> answer;
				if (toupper(answer) == 'Y') {
					cont = true;
				}
				else
				{
					cont = false;
				}
			}
		}
		else
		{
			cont = true;
		}

		answer = 'b';

	} while (cont == true);

	return 0;
}