#include <iostream>
#include <iomanip>
#include "Game.h"
using namespace std;


unsigned Game::nGames = 0; 
unsigned Game::nextID = 1000; 

Game::Game():ID(nextID){
  this->player1_ = "Unknown";
  this->player2_ = "Unknown";
  this->firstScore_ = 0;
  this->secondScore_ = 0;
  this->nGames++;
  this->nextID+=1;
  //this->ID_ = nextID;
}

Game::Game(string name1, string name2):ID(nextID){
  this->player1_ = name1;
  this->player2_ = name2;
  this->firstScore_ = 0;
  this->secondScore_ = 0;
  this->nGames++;
  this->nextID+=1;
  //this->ID_ = nextID;
}

void Game::setPlayers(){
  string name1, name2;
  cout << "Enter the first player's name: ";
  cin >> name1;
  cout << "\nEnter the second player's name: ";
  cin >> name2;

  this->player1_ = name1;
  this->player2_ = name2;
}

void Game::updateScore(int unsigned score1, int unsigned score2){
  this->firstScore_ = score1;
  this->secondScore_ = score2;
}

string Game::getWinner(){
  string winner;
  if(this->firstScore_ > this->secondScore_){
    winner = this->player1_;
  }
  else if(this->firstScore_ < this->secondScore_){
    winner = this->player2_;
  }
  return "The winner is " + winner + "\n\n\n";
}

void Game::print(){
  cout << "the two players are " << this->player1_ << " and " << this->player2_ << endl;

  cout << this->player1_ << "'s score is " << this->firstScore_ << endl;
  cout << this->player2_ << "'s score is " << this->secondScore_ << endl;
  cout << "This is game " << this -> nGames << endl;
  cout << "Game ID: " << ID;
  cout << "\n";
}

const string Game::getPlayer1() const{
  return player1_;
}

const string Game::getPlayer2() const{
  return player2_;
}

const int Game::getFirstScore() const{
  return firstScore_;
}

const int Game::getSecondScore() const{
  return secondScore_;
}

const unsigned Game::getID() const{
  return ID;
}