#ifndef human_h
#define human_h
#include"player.h"
namespace game{
	class HumanPlayer:public Player{
		virtual void smartguess(int,int);
		virtual int getGuess();
	};
}
#endif
