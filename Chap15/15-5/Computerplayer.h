#ifndef com_h
#define com_h
#include"player.h"
namespace game{
	class ComputerPlayer:public Player{
		virtual int getGuess();
	};
}
#endif
