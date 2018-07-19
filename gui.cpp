#include <iostream>

using namespace std;

int main()
{
const int ROWS = 3;
const int COLS = 3;
char board[ROWS][COLS] = {' '};


cout << "| " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "|\n";
cout << "|____|____|____|\n";
cout << "| " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "|\n";
cout << "|____|____|____|\n";
cout << "| " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "|\n";
cout << "|____|____|____|\n";






return 0;
}
