#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player { 
  friend ostream& operator <<(ostream& output, Player& player);

  private: 
    //Do not modify the data members
    string username_; //username for a registered player 
    string password_; //password for the registered player 
    unsigned nWins_ = 0; //nunber of wins by the registered player
  public:
    Player(string, string, int);
    void display();
    const string getName() const;
    const int getWins() const;
    const string getPassword() const;
}; 
#endif