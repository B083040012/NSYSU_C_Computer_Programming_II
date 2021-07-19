#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Humanplayer.cpp"
#include"Computerplayer.cpp"
using namespace game;
using namespace std;

bool checkforwin(int guess,int answer,Player &p1){
	if(guess==answer){
		cout << "You're right! You win!\n";
		return true;
	}
	else if(guess<answer){
		cout << "Your guess is too low.\n";
		p1.smartguess(0,guess);
		return false;
	}
	else{
		cout << "Your guess is too high.\n";
		p1.smartguess(1,guess);
		return false;
	}
}

void play(Player &player1,Player &player2){
	srand(time(NULL));
	int answer=rand()%100,guess=0;
	//cout << "answer:" << answer << endl;
	while(1){
		cout << "Player1's turn to guess.\n";
		guess=player1.getGuess();
		cout << "\n-----------\n" << guess << "\n-----------\n";
		if(checkforwin(guess,answer,player2)) break;
		cout << "Player2's turn to guess.\n";
		guess=player2.getGuess();
		if(checkforwin(guess,answer,player2)) break;
	}
}

int main(){
	HumanPlayer h1;
	ComputerPlayer c1;
	play(h1,c1);
}
