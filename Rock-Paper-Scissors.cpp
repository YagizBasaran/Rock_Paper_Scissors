
#include <iostream>
using namespace std;

int main() {

	string options[3] = {"ROCK","PAPER","SCISSORS"};

	cout << "Welcome to the game Rock - Paper - Scissors !! Select one of them..." << endl;
	cout << "'v' for 1v1 \n'b' for DOOM BOT\n'n' for NORMAL BOT " << endl;
	string selection;
	cin >> selection;

	if(selection == "b"){

		cout << "Playing versus DOOM BOT, good luck...\nFor selection: " << endl;

		bool gameOn = true;

		int botCount = 0; int playerCount = 0;

		while(gameOn){
			cout << "1 => Rock\n2 => Paper\n3 => Scissors" << endl;
			int player; int bot;
			cin >> player;

			cout << "Player selects " << options[player-1] << endl;

			if(player <= 3 && player >= 1){
				if(player == 1){
					bot = 2;
				}
				else if(player == 2){
					bot = 3;
				}
				else{
					bot = 1;
				}
			}
			else{
				cout << "Invalid select" << endl;
			}

			cout << "DOOM BOT selects " << options[bot-1] << endl;

			if(bot > player || (bot == 1 && player == 3)){
				botCount++;
				cout << "DOOM BOT wins! Want to continue ? 'y' or 'n' " << endl;
				cout << "Doom Bot: " << botCount << " Player: " << playerCount << endl;
				string keepPlay;
				cin >> keepPlay;
				if(keepPlay == "n"){
					gameOn = false;
				}
			}
		}

	}
	else if(selection == "v"){

		cout << "Playing versus ANOTHER PLAYER, good luck...\nFor selection: " << endl;

				bool gameOn = true;

				int player2Count = 0; int player1Count = 0;

				while(gameOn){
					cout << "1 => Rock\n2 => Paper\n3 => Scissors" << endl;
					int player1; int player2;
					cin >> player1; cin >> player2;

					cout << "Player1 selects " << options[player1-1] << endl;
					cout << "Player2 selects " << options[player2-1] << endl;

					if(player1 <= 3 && player1 >= 1 && player2 <=3 && player2 >= 1){
						if(player1 > player2 || (player1 == 1 && player2 == 3)){
							player1Count++;
							cout << "PLAYER 1 wins! Want to continue ? 'y' or 'n' " << endl;
							cout << "Player 1: " << player1Count << " Player 2: " << player2Count << endl;
							string keepPlay;
							cin >> keepPlay;
							if(keepPlay == "n"){
								gameOn = false;
							}
						}

						else if(player2 > player1 || (player2 == 1 && player1 == 3)){
							player2Count++;
							cout << "PLAYER 2 wins! Want to continue ? 'y' or 'n' " << endl;
							cout << "Player 1: " << player1Count << " Player 2: " << player2Count << endl;
							string keepPlay;
							cin >> keepPlay;
							if(keepPlay == "n"){
								gameOn = false;
							}
						}
					}
					else{
						cout << "Invalid select" << endl;
					}
				}
	}
	else if(selection == "n"){

		cout << "Playing versus NORMAL BOT, good luck...\nFor selection: " << endl;

				bool gameOn = true;

				int botCount = 0; int playerCount = 0;

				while(gameOn){
					cout << "1 => Rock\n2 => Paper\n3 => Scissors" << endl;
					int player; int bot;
					cin >> player;

					cout << "Player selects " << options[player-1] << endl;

					if(player <= 3 && player >= 1){

						bot = 1 + (rand() % (3 - 1 + 1));

					}
					else{
						cout << "Invalid select" << endl;
					}

					cout << "NORMAL BOT selects " << options[bot-1] << endl;

					if(bot > player || (bot == 1 && player == 3)){
						botCount++;
						cout << "NORMAL BOT wins! Want to continue ? 'y' or 'n' " << endl;
						cout << "Normal Bot: " << botCount << " Player: " << playerCount << endl;
						string keepPlay;
						cin >> keepPlay;
						if(keepPlay == "n"){
							gameOn = false;
						}
					}
					else if(player > bot || (player == 1 && player == 3)){
						playerCount++;
						cout << "Player wins! Want to continue ? 'y' or 'n' " << endl;
						cout << "Normal Bot: " << botCount << " Player: " << playerCount << endl;
						string keepPlay;
						cin >> keepPlay;
						if(keepPlay == "n"){
							gameOn = false;
						}
					}
				}

	}
	else{
		cout << "You won't play >:D" << endl;
	}

	return 0;
}
