#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
//player variables declaration
string nickname;
int games_played = 0;
int control;

//functions declaration
void start_up();
void menu();
void madlib();
void rng();
void rps();

int main()
{
	start_up(); //call on start-up menu
	cout << "Press 1 to Start! || Press 0 to Quit!" << endl;
	cin >> control;

	srand(time(NULL));

	while (true) {
		if (control == 1) {
			menu();
		}
		else if (control == 0) {
			cout << endl << "Thank you for playing! See you again!" << endl;
			break;
		}

	}
}

void start_up() {
	{
		cout << "-------------------------------------------------------" << endl;
		cout << "-------------------------------------------------------" << endl << endl;
		cout << " _______  ___   __   __  _______  ___      _______     " << endl;
		cout << "|       ||   | |  |_|  ||       ||   |    |       |    " << endl;
		cout << "|  _____||   | |       ||    _  ||   |    |    ___|    " << endl;
		cout << "| |_____ |   | |       ||   |_| ||   |    |   |___     " << endl;
		cout << "|_____  ||   | |       ||    ___||   |___ |    ___|    " << endl;
		cout << " _____| ||   | | ||_|| ||   |    |       ||   |___     " << endl;
		cout << "|_______||___| |_|   |_||___|    |_______||_______|    " << endl;
		cout << " _______  _______  __   __  _______                    " << endl;
		cout << "|       ||   _   ||  |_|  ||       |                   " << endl;
		cout << "|    ___||  |_|  ||       ||    ___|                   " << endl;
		cout << "|   | __ |       ||       ||   |___                    " << endl;
		cout << "|   ||  ||       ||       ||    ___|                   " << endl;
		cout << "|   |_| ||   _   || ||_|| ||   |___                    " << endl;
		cout << "|_______||__| |__||_|   |_||_______|                   " << endl;
		cout << " _______  _______  ______    _______  _______  ___     " << endl;
		cout << "|       ||       ||    _ |  |       ||   _   ||   |    " << endl;
		cout << "|    _  ||   _   ||   | ||  |_     _||  |_|  ||   |    " << endl;
		cout << "|   |_| ||  | |  ||   |_||_   |   |  |       ||   |    " << endl;
		cout << "|    ___||  |_|  ||    __  |  |   |  |       ||   |___ " << endl;
		cout << "|   |    |       ||   |  | |  |   |  |   _   ||       |" << endl;
		cout << "|___|    |_______||___|  |_|  |___|  |__| |__||_______|" << endl << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "-------------------------------------------------------" << endl << endl;
	}

	cout << "Welcome to the Simple Game Portal for Simple Games!\n" << endl;
	cout << "Enter your nickname: ";
	cin >> nickname;
	cout << "Welcome, " << nickname << "!\n\n";
}

void menu() {
	int games_control;

	cout << endl << endl << "----------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------" << endl << endl;
	cout << " _____  _____  _____  _____    _____  _____  _____  _____ " << endl;
	cout << "|     ||  _  ||     ||   | |  |     ||   __||   | ||  |  |" << endl;
	cout << "| | | ||     ||-   -|| | | |  | | | ||   __|| | | ||  |  |" << endl;
	cout << "|_|_|_||__|__||_____||_|___|  |_|_|_||_____||_|___||_____|" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << endl << "Hello, " << nickname << "!" << endl << "You have played " << games_played << " game(s)!\n\n";
	cout << "1 || Random Number Guesser" << endl << "2 || Madlib" << endl << "3 || Rock, Paper, Scissors" << "\n\n0 || QUIT";
	cout << "\nInput the number of chosen game: ";
	cin >> games_control;
	if (games_control == 1) {
		rng();
	}
	else if (games_control == 2) {
		madlib();
	}
	else if (games_control == 3) {
		rps();
	}
	else if (games_control == 0) {
		control = 0;
	}
}

void rng() {
	int randomnum = rand() % 13 + 1;
	int guess = 0;

	cout << endl << "------------------------------------------------------------------------------------" << endl;
	cout << "------------------------------------------------------------------------------------" << endl << endl;
	cout << "             _____  _____  _____  _____  _____    _____  _____  _____                 " << endl;
	cout << "            |   __||  |  ||   __||   __||   __|  |_   _||  |  ||   __|                " << endl;
	cout << "            |  |  ||  |  ||   __||__   ||__   |    | |  |     ||   __|                " << endl;
	cout << " _____  ____|_____||_____||_____||_____||_____|___ |_|__|__|__||_____|_  _____  _____ " << endl;
	cout << "| __  ||  _  ||   | ||    \\ |     ||     |  |   | ||  |  ||     || __  ||   __|| __  |" << endl;
	cout << "|    -||     || | | ||  |  ||  |  || | | |  | | | ||  |  || | | || __ -||   __||    -|" << endl;
	cout << "|__|__||__|__||_|___||____/ |_____||_|_|_|  |_|___||_____||_|_|_||_____||_____||__|__|" << endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << "------------------------------------------------------------------------------------" << endl << endl;

	cout << endl << "Random Number Guesser!\n" << "Anytime you want to quit, enter 999!\n";
	cout << "\nA random number between 1 - 13 have been generated!\n" << endl;
	while (true) {
		cout << "Input guess : ";
		cin >> guess;

		if (guess == 999) {
			break;
		}
		else if (guess == randomnum) {
			cout << endl << "You've guessed correctly! \n" << "The secret number is " << randomnum << "\n\n+1 Games Played!\n\n";
			games_played++;
			Sleep(3000);
			break;
		}
		else if (guess > randomnum) {
			cout << "Too high!\n";
		}
		else if (guess < randomnum) {
			cout << "Too low!\n";
		}
	}
}
void madlib() {
	cout << "----------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------" << endl << endl;
	cout << "         _____  _____  ____   __     _____  _____         " << endl;
	cout << "        |     ||  _  ||    \\ |  |   |     || __  |        " << endl;
	cout << "        | | | ||     ||  |  ||  |__ |-   -|| __ -|        " << endl;
	cout << " _ _ _  |_|_|_||__|__||____/ |_____||_____||_____|  _____ " << endl;
	cout << "| | | ||     || __  ||    \\   |   __||  _  ||     ||   __|" << endl;
	cout << "| | | ||  |  ||    -||  |  |  |  |  ||     || | | ||   __|" << endl;
	cout << "|_____||_____||__|__||____/   |_____||__|__||_|_|_||_____|" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------" << endl << endl;
	cout << endl << "Madlib Game!\n" << "Anytime you want to quit, enter 999!\n";
	cout << "\nFill in the words to create a story!\n" << endl;
	string words[3];
	string wordType[3] = { "noun","adjective","verb ending in -ing" };
	int story = 0;
	story = rand() % 3; // generates numbers 0,1,2

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << wordType[i] << ": ";
		cin >> words[i];
	}

	if (story == 0)
	{
		cout << endl;
		cout << "===================================================" << endl;
		cout << "===================================================" << endl << endl;
		cout << "   _____ _______ ____  _______     __           __ " << endl;
		cout << "  / ____|__   __/ __ \\|  __ \\ \\   / /          /_ |" << endl;
		cout << " | (___    | | | |  | | |__) \\ \\_/ /   ______   | |" << endl;
		cout << "  \\___ \\   | | | |  | |  _  / \\   /   |______|  | |" << endl;
		cout << "  ____) |  | | | |__| | | \\ \\  | |              | |" << endl;
		cout << " |_____/   |_|  \\____/|_|  \\_\\ |_|              |_|" << endl << endl;
		cout << "===================================================" << endl;
		cout << "===================================================" << endl << endl;

		cout << "The " << words[0] << " city was especially " << words[1] << " at nighttime.";
		cout << endl << "It was in the dark of the night that the stars seemed to have descended from the skyand turned " << words[0] << " into a city of twinkling lights. ";
		cout << endl << words[0] << " was named after this city, and perhaps names really do have power, ";
		cout << endl << "because as if from the same mold, " << words[0] << " was similarly " << words[1];
		cout << endl << "The love " << words[0] << " had for their namesake was not a secret.";
		cout << endl << "Everyone knew their life revolved around it. From sleeping to waking, from living to even " << words[2];
		cout << endl << "Even when the time came that a single city could no longer suppress the wanderlust in the soul, ";
		cout << endl << "even when " << words[0] << " eventually left for brighter horizons, nothing had changed.";
		cout << endl << "Perhaps you could remove " << words[0] << " from the city, but you can't remove the city from " << words[0];
		cout << endl << "In distant places, every little thought would bring about nostalgia. ";
		cout << words[0] << " could just be " << words[2] << ", and memories of when " << words[0] << " did the very same thing back in the city would come to mind.";
		cout << endl;
		Sleep(8000);
	}
	else if (story == 1)
	{
		cout << "=====================================================" << endl;
		cout << "=====================================================" << endl;
		cout << "   _____ _______ ____  _______     __           ___  " << endl;
		cout << "  / ____|__   __/ __ \\|  __ \\ \\   / /          |__ \\ " << endl;
		cout << " | (___    | | | |  | | |__) \\ \\_/ /   ______     ) |" << endl;
		cout << "  \\___ \\   | | | |  | |  _  / \\   /   |______|   / / " << endl;
		cout << "  ____) |  | | | |__| | | \\ \\  | |              / /_ " << endl;
		cout << " |_____/   |_|  \\____/|_|  \\_\\ |_|             |____|" << endl;
		cout << "=====================================================" << endl;
		cout << "=====================================================" << endl << endl;
		cout << "Once upon a time, there lived the most " << words[1] << " " << words[0] << ". ";
		cout << endl << words[0] << " was good at a lot of things. But what was " << words[0] << " the best at?";
		cout << endl << "Naturally they were the best at " << words[2] << ".It was because they had been " << words[2] << " from a very young age.";
		cout << endl << "At one point, there had been a national " << words[2] << " competition. ";
		cout << endl << words[0] << " lived in a particularly supportive community, who all chipped in money to send the " << words[1] << words[0] << " to the capital, where the " << words[2] << " competition was held.";
		cout << endl << "With baited breaths, the community watched " << words[0] << " progress in the " << words[2] << " competition, and eventually, " << words[0] << " was declared the Nation�s Number One in " << words[2];
		cout << endl << "It was a good day for " << words[0] << ".";
		cout << endl;
		Sleep(8000);
	}
	else
	{ //story 2
		cout << "======================================================" << endl;
		cout << "======================================================" << endl;
		cout << "   _____ _______ ____  _______     __           ____  " << endl;
		cout << "  / ____|__   __/ __ \\|  __ \\ \\   / /          |___ \\ " << endl;
		cout << " | (___    | | | |  | | |__) \\ \\_/ /   ______    __) |" << endl;
		cout << "  \\___ \\   | | | |  | |  _  / \\   /   |______|  |__ < " << endl;
		cout << "  ____) |  | | | |__| | | \\ \\  | |              ___) |" << endl;
		cout << " |_____/   |_|  \\____/|_|  \\_\\ |_|             |____/ " << endl;
		cout << "======================================================" << endl;
		cout << "======================================================" << endl << endl;
		cout << "It was like magic. You wake up one day and the world was different, that kind of thing.";
		cout << endl << "A musician from who knows where shot up the hall of fameand dominated the nation, if not the world. ";
		cout << endl << words[0] << " was peerlessly " << words[1] << " � it was a stroke of luck, their sudden windfall.";
		cout << endl << "But " << words[0] << " didnt let the success get to their head and lived the same way they always lived. ";
		cout << endl << "A refreshing, youthful musician who sung in secluded but beautiful places, ";
		cout << " and sung such " << words[1] << " songs with overflowing intensity, ";
		cout << endl << "as if the human body wasn't enough to hold the entirety of their soul.";
		cout << endl << words[0] << " had never let anyone know the details of their daily life, but that was fine.";
		cout << endl << "Their voice and their songs was enough.";
		cout << endl;
		Sleep(8000);
	}

	cout << "||======================================||" << endl;
	cout << "||======================================||" << endl;
	cout << "||  _   _                           _   ||" << endl;
	cout << "|| | | | |                         | |  ||" << endl;
	cout << "|| | |_| |__   ___    ___ _ __   __| |  ||" << endl;
	cout << "|| | __| '_ \\ / _ \\  / _ \\ '_ \\ / _` |  ||" << endl;
	cout << "|| | |_| | | |  __/ |  __/ | | | (_| |_ ||" << endl;
	cout << "||  \\__|_| |_|\\___|  \\___|_| |_|\\__,_(_)||" << endl;
	cout << "||======================================||" << endl;
	cout << "||======================================||" << endl << endl;
	games_played++;
}
void rps() {
	int user;
	int random;
	int lower = 1, upper = 3;
	int win = 0, lose = 0;
	bool valid;
	bool reset;
	char redo = 'Y';

	while (redo == 'Y')
	{
		cout << "------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------------" << endl << endl;
		cout << "                     _ _ _     _                      _                               " << endl;
		cout << "                    | | | |___| |___ ___ _____ ___   | |_ ___                         " << endl;
		cout << "                    | | | | -_| |  _| . |     | -_|  |  _| . |                        " << endl;
		cout << "                    |_____|___|_|___|___|_|_|_|___|  |_| |___|                        " << endl;
		cout << "                                                                                      " << endl;
		cout << "                                                                                   __ " << endl;
		cout << " _____         _        _____                      _____     _                    |  |" << endl;
		cout << "| __  |___ ___| |_     |  _  |___ ___ ___ ___     |   __|___|_|___ ___ ___ ___ ___|  |" << endl;
		cout << "|    -| . |  _| '_|_   |   __| .'| . | -_|  _|_   |__   |  _| |_ -|_ -| . |  _|_ -|__|" << endl;
		cout << "|__|__|___|___|_,_| |  |__|  |__,|  _|___|_| | |  |_____|___|_|___|___|___|_| |___|__|" << endl;
		cout << "                  |_|            |_|         |_|                                      " << endl;
		cout << "------------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------------" << endl << endl;
		cout << "You have won " << win << " time/s, and have lost " << lose << " time/s." << endl << endl;

		cout << "Which one do you use?" << endl << endl;

		cout << "1 for Rock" << endl << "2 for Paper" << endl << "3 for Scissors" << endl << endl << "Input action: ";

		do {

			while (!(cin >> user))
			{
				cout << endl << "Numbers only, please. Try again." << endl << endl << "1 for Rock" << endl << "2 for Paper" << endl << "3 for Scissors" << endl << endl;
				cin.clear();
				cin.ignore(123, '\n');
			}

			switch (user) {
			case 1:
				cout << endl << "You chose Rock." << endl << endl;
				valid = true;
				break;
			case 2:
				cout << endl << "You chose Paper." << endl << endl;
				valid = true;
				break;
			case 3:
				cout << endl << "You chose Scissors." << endl << endl;
				valid = true;
				break;
			default:
				cout << endl << "Whoops! Invalid input. Try again." << endl << endl << "1 for Rock" << endl << "2 for Paper" << endl << "3 for Scissors" << endl << endl;
				valid = false;
			}
		} while (!valid);


		srand(time(NULL));

		random = (rand() % (upper - lower + 1)) + lower;

		switch (random)
		{
		case 1:
			cout << "Your opponent chose Rock." << endl << endl;
			break;
		case 2:
			cout << "Your opponent chose Paper." << endl << endl;
			break;
		case 3:
			cout << "Your opponent chose Scissors." << endl << endl;
			break;
		}

		if (user == random) {
			cout << "TIE!" << endl << endl;
		}
		else if ((user == 1 && random == 3) || (user == 2 && random == 1) || (user == 3 && random == 2)) {
			win++;
			cout << "YOU WIN!" << endl << endl;
		}
		else if ((user == 3 && random == 1) || (user == 1 && random == 2) || (user == 2 && random == 3)) {
			lose++;
			cout << "YOU LOSE!" << endl << endl;
		}

		cout << "Wanna try again? Type 'Y': ";
		cin >> redo;
		redo = toupper(redo);
		cout << endl << endl;
	}

	cout << "Bye!";
	games_played++;
	Sleep(3000);
}

