#ifndef human_cpp
#define human_cpp
#include"Humanplayer.h"
#include"player.cpp"
#include<iostream>
namespace game{
	using namespace std;
	void HumanPlayer::smartguess(int i1,int i2){
		return;
	}
	int HumanPlayer::getGuess(){
		int guess;
		cin >> guess;
		return guess;
	}
}
#endif
