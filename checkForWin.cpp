//Tic Tac Math Check for Win Function - Noam Swisa - CISC3110 - MY9
///This function checks for wins of all kinds, and ensures that they are
///made up of 3 digits, rather than 2 and a 0 (e.g. 9+6+0)
#include <iostream>
#include "checkForWin.h"
using namespace std;

bool checkForWin(int board[][3])
{
  const int WINSUM = 15;

  for (int row = 0; row < 3; row++) //Checking for vertical wins
    if(board[row][0] + board[row][1] + board[row][2] == WINSUM &&
       board[row][0] != 0 && board[row][1] != 0 && board[row][2] != 0) //Ensures no two digit wins 
      return true;
  for (int col = 0; col < 3; col++) //Checking for horizontal wins
    if(board[0][col] + board[1][col] + board[2][col] == WINSUM &&
       board[0][col] != 0 && board[1][col] != 0 && board[2][col] != 0) // .. B/c 0 is an open space 
      return true;
  if ((board[0][0] + board[1][1] + board[2][2] == WINSUM &&
       board[0][0] != 0 && board[1][1] != 0 && board[2][2] != 0) ||
      (board[0][2] + board[1][1] + board[2][0] == WINSUM &&
       board[0][2] != 0 && board[1][1] != 0 && board[2][0] != 0)) //Checking for diagonal wins
    return true;
 
  //If none of the above are true... (no need for an else) 
  return false;
}
