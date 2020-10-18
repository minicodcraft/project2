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
  unsigned ID;
  unsigned int score1;
  unsigned int score2;


  while(!input.eof()){
    input >> action;
    if(action == "login"){
      input >> userlogin;
      input >> userpassword;
      system.login(userlogin, userpassword);
    }
    else if(action == "end"){
      input >> ID;
      input >> score1;
      input >> score2;
      system.endGame(ID, score1, score2);
    }
  }

  cout << "\n";

  cout << "After prossessing activities.txt:" << endl;
  system.displayPlayers();

  
} //end of main
 