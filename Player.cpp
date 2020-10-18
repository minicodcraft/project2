//Add the implementation of member functions
#include <string>
#include <iostream>
#include "Player.h"
using namespace std;


Player::Player(string username, string password, int wins){
  this-> username_ = username;
  this-> password_ = password;
  this-> nWins_ = wins;
}

void Player::display(){
  cout << "Username: " << username_ << endl;
  cout << "Number of wins : " << nWins_ << endl << endl;
}

const string Player::getName() const{
  return username_;
}

const int Player::getWins() const{
  return nWins_;
}
const string Player::getPassword() const{
  return password_;
}

void Player::updateWins(){
  nWins_++;
}

ostream& operator <<(ostream& output, Player& player){
  output << player.username_ << "has " << player.nWins_ << " wins" << endl;
  return output;
}
