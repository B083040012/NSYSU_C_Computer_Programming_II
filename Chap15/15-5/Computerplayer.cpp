#ifndef com_cpp
#define com_cpp
#include"Computerplayer.h"
#include"player.cpp"
#include<cstdlib>
#include<iostream>
namespace game{
	using std::cout;
	int ComputerPlayer::getGuess(){
		srand(time(NULL));
		int guess=rand()%101;
		cout << "Computer guess " << guess << endl;
		return guess;
	}
}
#endif
