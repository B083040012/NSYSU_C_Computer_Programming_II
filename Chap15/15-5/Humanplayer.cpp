#ifndef human_cpp
#define human_cpp
#include"Humanplayer.h"
#include"player.cpp"
#include<iostream>
namespace game{
	using namespace std;
	int HumanPlayer::getGuess(){
		int guess;
		cin >> guess;
		return guess;
	}
}
#endif
