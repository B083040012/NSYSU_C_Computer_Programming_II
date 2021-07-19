#ifndef com_cpp
#define com_cpp
#include"Computerplayer.h"
#include"player.cpp"
#include<cstdlib>
#include<iostream>
namespace game{
	using std::cout;
	ComputerPlayer::ComputerPlayer():min(0),max(99){};
	int ComputerPlayer::getGuess(){
		srand(time(NULL));
		int guess;
		guess=rand()%(max-min)+min+1;
		cout << "Computer guess " << guess << endl;
		return guess;
	}
	void ComputerPlayer::smartguess(int func,int guess){
		if(func==0) min=guess;
		else if(func==1) max=guess-1;
	}
}
#endif
