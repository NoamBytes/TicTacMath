//Tic Tac Math Validate Functions - Noam Swisa - CISC3110 - MY9
//This file contains one function to validate the number, and the other to validate the position.
//It also prints the error messages in case an invalid or taken play has been entered.
#include <iostream>
#include "validate.h"
using namespace std;

//validateNum makes sure that the number is in range and hasn't been played
bool validateNum(int num, int played[])
{
  if (num < 1 || num > 9) //Ensures number entered is in range (1-9)
  {
    cout << "Uh oh! That number is invalid." << endl;
    cout << "Only numbers 1 through 9 are valid." << endl;
    return false;
  }
  for (int i = 0; i < 9; i++)
  {
    if (num == played[i]) //Ensures number hasn't been played.
    {
      cout << "Whoops! That number has already been played." << endl;
      cout << "Remember, each number can only be played once." << endl;
      return false;
    }
  }

  return true;
}


//validatePos makes sure that the position is in range and hasn't been taken
bool validatePos(int row, int col, int board[][3])
{
  if (row < 0 || row > 2) //Ensuring row is in range
  {
    cout << "Uh oh! The row you entered is invalid." << endl;
    cout << "Remember, rows and columns are numbered 0-2." << endl;
    return false;
  }
  if (col < 0 || col > 2) //Ensuring column is in range
  {
    cout << "Uh oh! The column you entered is invalid." << endl;
    cout << "Remember, rows and columns are numbered 0-2" << endl;
    return false;
  }
  if (board[row][col] != 0) //The board is initialized with all positions filled with 0
    {                       //If the value is anything else, it's taken.
    cout << "Sorry! That position is already taken." << endl;
    return false;
  }
  
  return true;
}
