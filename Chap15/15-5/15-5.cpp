#include<iostream>
#include<cstdlib>
#include"Humanplayer.cpp"
#include"Computerplayer.cpp"
using namespace game;
using namespace std;

bool checkforwin(int guess,int answer){
	if(guess==answer){
		cout << "You're right! You win!\n";
		return true;
	}
	else if(guess<answer){
		cout << "Your guess is too low.\n";
		return false;
	}
	else{
		cout << "Your guess is too high.\n";
		return false;
	}
}

void play(Player &player1,Player &player2){
	srand(time(NULL));
	int answer=rand()%100,guess=0;
	while(1){
		cout << "Player1's turn to guess.\n";
		guess=player1.getGuess();
		if(checkforwin(guess,answer)) return;
		cout << "Player2's turn to guess.\n";
		guess=player2.getGuess();
		if(checkforwin(guess,answer)) return;
	}
}

int main(){
	HumanPlayer h1;
	ComputerPlayer c1;
	play(h1,c1);
}
