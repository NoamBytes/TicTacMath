//Tic Tac Math Change Player Function - Noam Swisa - CISC3110 - MY9
///This function changes the player from 1 to 2 and vice versa.
///Because why would you trust people to take turns on their own?
#include "changePlayer.h"
#include <iostream>
using namespace std;

int changePlayer(int player)
{
  if (player == 1)
    player = 2;
  else
    player = 1;
 
  return player;
}
