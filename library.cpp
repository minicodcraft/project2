//Add the implementation of operator<< for Game and Player
#include "GameSystem.h"
#include "Player.h"
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
