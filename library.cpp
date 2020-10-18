//Add the implementation of operator<< for Game and Player
#include "GameSystem.h"
#include "Player.h"
#include "library.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

ostream& operator <<(ostream& output, Player& player){
  output << player.username_ << "has " << player.nWins_ << " wins" << endl;
  return output;
}


ostream& operator <<(ostream& output, Game& game){
  cout << "Game " << game.getID() << "    " << game.getPlayer1() << "    " << game.getFirstScore() << "    " << game.getPlayer2() << "    " << game.getSecondScore() << endl;
  return output;
}
