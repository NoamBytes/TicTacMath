//Tic Tac Math Play Function - Noam Swisa - CISC3110 - MY9
///Play function gets the number, row, and column from the player.
///It then submits these for validation by calling the validate functions,
///eventually returning to main when a valid play has been made
#include <iostream>
#include "play.h"
#include "validate.h"
using namespace std;

void play(int player, int played[], int board[][3])
{
  int row, col, numToPlay;
  bool numValid, posValid;

  cout << "Player " << player << ": Enter the number you'd like to place (1-9) > ";
  cin >> numToPlay;
  cout << "You have entered " << numToPlay << endl;
  numValid = validateNum(numToPlay, played);
  while(numValid == false) // Keep doing this until a valid number is entered
  {
    cout << "Enter a new number to play. > ";
    cin >> numToPlay;
    cout << "You have entered " << numToPlay << endl;
    numValid = validateNum(numToPlay, played);
  }
  cout << "Enter the row to place your number in (0-2) > ";
  cin >> row;
  cout << "The row you entered is " << row << endl;
  cout << "Enter the column to place your number in (0-2) > ";
  cin >> col;
  cout << "The column you entered is " << col << endl;
  posValid = validatePos(row, col, board);
  while(posValid == false) // Keep doing this until a valid position is entered
  {
    cout << "Enter a new row > ";
    cin >> row;
    cout << "The row you entered is " << row << endl;
    cout << "Enter a new column > ";
    cin >> col;
    cout << "The column you entered is " << col << endl;
    posValid = validatePos(row, col, board);
  }
  if (numValid && posValid) //Check both again just in case 
  {
    board[row][col] = numToPlay; //Places play on board
    played[numToPlay - 1] = numToPlay; // Ensures that played[0] = 1, etc.
  }
  
  return;
}
