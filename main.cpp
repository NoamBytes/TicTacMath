// Tic Tac Math Main Function - Noam Swisa - CISC3110 - MY9
///Main function introduces the game and calls the functions in a loop
///until someone wins, then it exits
#include <iostream>
#include "play.h"
#include "display.h"
#include "changePlayer.h"
#include "checkForWin.h"
using namespace std;

int main()
{
  const int ROWS = 3;
  const int COLS = 3;
  bool win = false;
  int currentPlayer = 1;
  int numsPlayed[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int board[ROWS][COLS] ={{0, 0, 0},
                          {0, 0, 0},
                          {0, 0, 0}};

  //Short intro & instructions
  cout << "Welcome to Tic Tac Math!" << endl;
  cout << "In order to win, you must make 3 numbers add up to 15" << endl;
  cout << "You can do this horizontally, vertically, or diagonally." << endl;
  cout << "The row and column numbers are 0-2, 0 being the first and 2 the last." << endl;
  cout << "A 0 on the display board indicates an available position." << endl;
  cout << "Lets begin! Here is your board:" << endl;
  display(board); //Shows empty board
  play(currentPlayer, numsPlayed, board); //Gets first play
  do
    {
      currentPlayer = changePlayer(currentPlayer);
      display(board);
      play(currentPlayer, numsPlayed, board);
      win = checkForWin(board);
    } while(win == false); // Keep going until someone wins
    display(board);
    cout << "Congrats " << currentPlayer << "! You've won the game!" << endl;
  return 0;
}
