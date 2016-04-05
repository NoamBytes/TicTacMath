//Tic Tac Math Display Function - Noam Swisa - CISC3110 - MY9
///Displays the board like a big tic tac toe board
#include <iostream>
#include "display.h"
using namespace std;

void display(int boardarr[][3])
{
  cout << endl;
  cout << "      |      |      " << endl;
  cout << "   " << boardarr[0][0] << "  |  " << boardarr[0][1] << "   |   "
       << boardarr[0][2] << "   " << endl;
  cout << "______|______|______" << endl;
  cout << "      |      |      " << endl;
  cout << "   " << boardarr[1][0] << "  |  " << boardarr[1][1] << "   |   "
       << boardarr[1][2] << "   " << endl;
  cout << "______|______|______" << endl;
  cout << "      |      |      " << endl;
  cout << "   " << boardarr[2][0] << "  |  " << boardarr[2][1] << "   |   "
       << boardarr[2][2] << "   " << endl;
  cout << "      |      |      " << endl << endl;
  return;
}
