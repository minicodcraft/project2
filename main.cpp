//add additional #include directive
#include "Game.h"
#include "Player.h"
#include "GameSystem.h"
#include <iostream>
using namespace std;

int main() {
  GameSystem system;
  system.initPlayers();
  system.sort();
  cout << "Before prossessing activities.txt:" << endl;
  system.displayPlayers();
} //end of main
 