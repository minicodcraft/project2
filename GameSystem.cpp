#include "GameSystem.h"
#include "Player.h"
#include "Game.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

string waitingPlayer = "";

GameSystem::GameSystem(){
  waitingPlayer = "";
}

bool GameSystem::initPlayers(){
  bool inPlayer = false;
  string user = "";
  string password = "";

  ifstream input;
  input.open("players.dat");

  

  if(input.is_open()){
    inPlayer = true;
  }

  while(!input.eof()){
    input >> user;
    input >> password;
    Player newPlayer(user, password, 0);
    players_.push_back(newPlayer);
  }

  return inPlayer;
}

void GameSystem::sort(){
  Player newPlayer("", "", 0);
  int holder = 0;
  int index = 1;

  for (int loop = 0; loop < players_.size() - 1; loop++){
    newPlayer = players_[loop];

    for(int inLoop = index; inLoop < players_.size(); inLoop++){
      if(newPlayer.getName() > players_[inLoop].getName()){
        newPlayer = players_[inLoop];
      }
    }

    for(int inLoop = 0; inLoop < players_.size(); inLoop++){
      if(newPlayer.getName() == players_[inLoop].getName()){
        holder = inLoop;
      }
    }

    players_[holder] = players_[loop];
    players_[loop] = newPlayer;
    index++;
  }
}

void GameSystem::displayPlayers() const{
  for(int loop = 0; loop < players_.size(); loop++){
    cout << players_[loop].getName() << " has " << players_[loop].getWins() << endl;
  }
}

void GameSystem::displayGames() const{
  for(int loop = 0; loop < games_.size(); loop++){
    cout << "Game " << games_[loop].getID() << "    " << games_[loop].getPlayer1() << "    " << games_[loop].getFirstScore() << "    " << games_[loop].getPlayer2() << "    " << games_[loop].getSecondScore() << endl;
  }
}

void GameSystem::login(const string& username, const string& password) const{
  bool loginAttempt = false;
  for(int loop = 0; loop < players_.size(); loop++){
    if(username == players_[loop].getName() && password == players_[loop].getPassword()){
        loginAttempt = true;
    }
  }
  
  if(loginAttempt == false){
    cout << "Invalid login with username : " << username << " and password: " << password << endl;
  }
  else{
    if(waitingPlayer == ""){
      cout << "Welcome " << username << ". As soon as another player joins the game will start." << endl;
      waitingPlayer = username;
    }
    else{
      cout << "Welcome " << username << ". " << waitingPlayer << " is ready to play with you." << endl;
    }
  }
}
