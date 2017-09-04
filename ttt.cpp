#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>

using namespace std;

class board{
public:
    char board[3][3];
    void initBoard ();
    void printBoard();
};

class player{
public:
    char aayushSymbol;
    char cpuSymbol;
};

class aayushPlayer : public player{
public:
    char aayushSymbol = 'X';
};

class cpuPlayer : public player{
public:
    char cpuSymbol = 'O';
};

class game : public board, public player {
private:
    char checkWin();
public:
	void playGame(char player, char cpu);
	int nextMove(const char wChance);
	string whoWin(int cw);
};

void board :: printBoard() {
    cout << endl << endl;
	cout << "     |     |     "<< endl;
	cout << "  "<< board[0][0]<< "  |  " << board[0][1] << "  |  "<< "  " << board[0][2]<< endl;
	cout << "_____|_____|_____"<< endl;
	cout << "     |     |     "<< endl;
	cout << "  "<< board[1][0]<< "  |  " << board[1][1] << "  |  "<< "  " << board[1][2]<< endl;
	cout << "_____|_____|_____"<< endl;
	cout << "     |     |     "<< endl;
	cout << "  "<< board[2][0]<< "  |  " << board[2][1] << "  |  "<< "  " << board[2][2]<< endl;
	cout << "     |     |     "<< endl<< endl << endl;
	cout << "-----------------"<< endl<< endl << endl;

}

void board :: initBoard () {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
}

char game :: checkWin() {
	if ((board[0][0] != ' ') && (board[0][0] == board[0][1] && board[0][0] == board[0][2] ||
		board[0][0] == board[1][0] && board[0][0] == board[2][0] ||
		board[0][0] == board[1][1] && board[0][0] == board[2][2])){
		return board[0][0];
		}
	if ((board[1][1] != ' ') && (board[1][1] == board[1][0] && board[1][1] == board[1][2] ||
		board[1][1] == board[0][1] && board[1][1] == board[2][1] ||
		board[1][1] == board[2][0] && board[1][1] == board[0][2])){
		return board[1][1];
		}
	if ((board[2][2] != ' ') && (board[2][2] == board[0][2] && board[2][2] == board[1][2] ||
		board[2][2] == board[2][0] && board[2][2] == board[2][1])){
		return board[2][2];
		}
	return 0;
}

int game :: nextMove(const char wChance){
    unsigned int row , col;
    while(1){
        srand(unsigned (time(0)));
        row = rand()%3;
        col = rand()%3;
        if(board[row][col] == ' ')
            break;
    }
    return (10*row) + col;

}

string game :: whoWin(int cw){
    if(cw)
        return "CPU WON";
    else
        return "AAYUSH WON";
}

void game :: playGame(const char aayushSymbol,const char cpuSymbol) {
	int moves = 0, row , col, w, cw;
	string whowin;
	while (moves < 9) {
        cout << "AAYUSH'S TURN" << endl << endl;
		w = this->nextMove(aayushSymbol);
		row = w / 10;
		col = w % 10;
		board[row][col] = aayushSymbol;
		moves++;
		printBoard();
		if (checkWin()){
			cw  = 0;
			whowin = this->whoWin(cw);
			cout << whowin;
		}
		if (moves == 9){
			cout << "DRAW";
			break;
		}
        w = this->nextMove(cpuSymbol);
		row = w / 10;
		col = w % 10;
		board[row][col] = cpuSymbol;
		moves++;
        cout << "CPU'S TURN" << endl << endl;
		printBoard();
		if (checkWin()){
			cw  = 1;
			whowin = this->whoWin(cw);
			cout << whowin;
		}
	}
}

int main() {
    cpuPlayer cpu;
    aayushPlayer aayush;
    game play;
    cout << "PLAYER SYMBOL : X" << endl << endl;
    cout << "CPU SYMBOL : O" << endl << endl;
    cout << "-----------------"<< endl<< endl << endl;
	play.initBoard();
	play.printBoard();
    play.playGame(aayush.aayushSymbol, cpu.cpuSymbol);
	return 0;
}
