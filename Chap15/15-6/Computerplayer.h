#ifndef com_h
#define com_h
#include"player.h"
namespace game{
	class ComputerPlayer:public Player{
		private:
			int min,max;
		public:
			ComputerPlayer();
			virtual int getGuess();
			void smartguess(int,int);
	};
}
#endif
