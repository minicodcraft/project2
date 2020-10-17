#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Player.h"
#include "Game.h"
using namespace std;


class Game {
  private:
    string player1_;
    string player2_;
    int firstScore_;
    int secondScore_;
    static unsigned nGames; 
    static unsigned nextID; 
    const unsigned ID; 

  public:
    Game();
    Game(string name1, string name2);
    void setPlayers();
    void updateScore(int unsigned score1, int unsigned score2);
    string getWinner();
    void print();
    const string getPlayer1() const;
    const string getPlayer2() const;
    const int getFirstScore() const;
    const int getSecondScore() const;
    const unsigned getID() const;

};

#endif
