#include<iostream>
#include<iomanip>
#include <stdlib.h>
using namespace std;

void displayMenu();
void displayGame();
void displayCredits();
void displayScore();
void displayInstruct();

const int rock = 1;
const int paper = 2;
const int scissor = 3;

int main()
{
	int choice;

	do
	{
		displayMenu();

		cout << endl;
		cout << "Enter your choice(1-5):";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:displayGame(); break;
		case 2:displayInstruct(); break;
		case 3:displayCredits(); break;
		case 4:displayScore; break;
		}
	}

	while (choice != 5);

	return 0;
}

void displayMenu()
{
	cout << "-------------------------\n";
	cout << "   Rock, Paper, Scissor!";
	cout << endl;
	cout << "1. Start game\n";
	cout << "2. View Instructions\n";
	cout << "3. View Credits\n";
	cout << "4. See your score\n";
	cout << "5. Exit the Game\n";
	cout << "-------------------------\n";
}

void displayGame()
{
	int choice, comChoice;
	int lose = 0;
	int win = 0;
	int tie = 0;
	char bleh;


	do
	{
		int comChoice = rand() % 3 + 1;

		cout << "--------------------------------------------------------------\n";
		cout << "Lets play Rock, Paper, Scissor! Do you think you can beat me?\n";
		cout << "Type 1 for Rock, 2 for Paper, 3 for Scissors: \n";
		cout << "--------------------------------------------------------------\n";
		cin >> choice;

		cout << endl;

		if (choice == 1 && comChoice == 1)
		{
			cout << "--------------------------------\n";
			cout << "Rock meets Rock its a tie!\n";
			cout << "--------------------------------\n";

			cout << endl;

			tie++;
		}
		else if (choice == 1 && comChoice == 2)
		{
			cout << "-------------------------------------------\n";
			cout << "Rock does not beat Paper the computer wins!\n";
			cout << "-------------------------------------------\n";

			cout << endl;

			lose++;
		}
		else if (choice == 1 && comChoice == 3)
		{
			cout << "--------------------------------\n";
			cout << "Rock beats Scissors you win!\n";
			cout << "--------------------------------\n";

			cout << endl;

			win++;
		}
		else if (choice == 2 && comChoice == 1)
		{
			cout << "--------------------------------\n";
			cout << "Paper beats Rock you win!\n";
			cout << "--------------------------------\n";

			cout << endl;

			win++;
		}
		else if (choice == 2 && comChoice == 2)
		{
			cout << "--------------------------------\n";
			cout << "Paper meets Paper its a tie!\n";
			cout << "--------------------------------\n";

			cout << endl;

			tie++;
		}
		else if (choice == 2 && comChoice == 3)
		{
			cout << "------------------------------------------------\n";
			cout << "Paper does not beat Scissors the computer wins!\n";
			cout << "------------------------------------------------\n";

			cout << endl;

			lose++;
		}
		else if (choice == 3 && comChoice == 1)
		{
			cout << "--------------------------------------------\n";
			cout << "Scissors does not beat Rock computer wins!\n";
			cout << "--------------------------------------------\n";

			cout << endl;

			lose++;
		}
		else if (choice == 3 && comChoice == 2)
		{
			cout << "--------------------------------\n";
			cout << "Scissors beats Paper you win!\n";
			cout << "--------------------------------\n";

			cout << endl;

			win++;
		}
		else if (choice == 3 && comChoice == 3)
		{
			cout << "-----------------------------------\n";
			cout << "Scissors meets Scissors its a tie!\n";
			cout << "-----------------------------------\n";

			cout << endl;

			tie++;
		}

		else
		{
			cout << "-----------------------------------\n";
			cout << "You didn't select 1, 2, or 3\n";
			cout << "-----------------------------------\n";

			cout << endl;

		}
		cout << "------------\n";
		cout << "Wins: " << win << endl;
		cout << "Ties:" << tie << endl;
		cout << "Losses:" << lose << endl;
		cout << "------------\n";

		cout << endl;

		cout << "-----------------------------------\n";
		cout << "Would you like to play again? Y/N" << endl;
		cout << "-----------------------------------\n";
		cin >> bleh;

		cout << endl;
	}

	while (bleh == 'y');

}

void displayCredits()
{
	cout << "--------------------------------------------------------------------------------------------------------------------------\n";
	cout << "  I did not create the game rock, paper, scissors but I did code this particular program. Thanks for checking it out!\n";
	cout << "  Special thanks to unlinkedcody for inspiring to get off my lazy ass and actually code this lol\n";
	cout << "  I am a beginner at programing and just trying out some small projects, if you have any tips let me know what you think!\n";
	cout << "--------------------------------------------------------------------------------------------------------------------------\n";
	cout << endl;
}

void displayScore()
{
	cout << "Sorry this is not working yet, you can see your score in the actual game though.\n";
	cout << endl;
}

void displayInstruct()
{
	cout << "------------------------------------------------------\n";
	cout << "Rock, Paper, Scissors is an easy to understand game.\n";
	cout << "Simply type 1 for Rock, 2 for Paper, 3 for Scissors. \n";
	cout << "------------------------------------------------------\n";
	cout << endl;
}