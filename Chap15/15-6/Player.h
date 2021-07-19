#ifndef player_h
#define player_h
namespace game{
	class Player{
		public:
			virtual void smartguess(int,int) =0;
			virtual int getGuess();
	};
} 
#endif
