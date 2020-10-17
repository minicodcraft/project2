//add additional #include directive
#include "Game.h"
#include "Player.h"
#include "GameSystem.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  GameSystem system;
  system.initPlayers();
  system.sort();
  cout << "Before prossessing activities.txt:" << endl;
  system.displayPlayers();

  cout << "\n";

  ifstream input;
  input.open("activities.txt");

  string userlogin;
  string userpassword;
  string action;


  while(!input.eof()){
    input >> action;
    input >> userlogin;
    input >> userpassword;
    if(action == "login"){
      system.login(userlogin, userpassword);
    }
  }
  
} //end of main
 