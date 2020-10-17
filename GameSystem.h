//Add the initialization of static data member and the implementation of member functionsre
#ifndef GAMESTSTEM_H
#define GAMESTSTEM_H
#include <string>
#include <vector>
#include "Player.h"
#include "Game.h"
using namespace std;

class GameSystem {
  private:
    vector<Player> players_;
    vector<Game> games_;
  public:
    GameSystem();
    void sort();
    bool initPlayers();
    void displayPlayers() const;
    void displayGames() const;
    void login(const string& username, const string& password) const;
};
#endif