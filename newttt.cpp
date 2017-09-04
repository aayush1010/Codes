#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct cell{
    int row;
    int column;
};

class Board{
public:
    char board[3][3];
    Board (){
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                board[i][j] = ' ';
            }
        }
    }
    void printBoard();
    cell nextMove();
};

class player{
public:
    char symbol;
    string name;
    void setSymbol(char s){
        symbol = s;
    }
    void setName(string newName){
        name = newName;
    }
};

class aayushPlayer : public player{
public:
    void showSymbol(){
        cout << symbol << endl;
    }
    void showName(){
        cout << name << endl;
    }
};

class computerPlayer : public player{
public:
    void showSymbol(){
        cout << symbol << endl;
    }
    void showName(){
        cout << name << endl;
    }
};

class game : public Board, public aayushPlayer, public computerPlayer{
public:
    game(): Board(){;}
    bool gameOver();
    void playGame(aayushPlayer, computerPlayer);
    string whoWon(string);
};

cell Board :: nextMove(){
    cell newMoveCell;
    int r, c;
    while(1) {
        srand(unsigned (time(0)));
        r = rand() % 3;
        c = rand() % 3;
        if(board[r][c] == ' '){
            newMoveCell.row = r;
            newMoveCell.column = c;
            break;
        }
    }
    return newMoveCell;
}

void Board :: printBoard(){
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

bool game :: gameOver(){
    if ((board[0][0] != ' ') && (board[0][0] == board[0][1] && board[0][0] == board[0][2] ||
        board[0][0] == board[1][0] && board[0][0] == board[2][0] ||
        board[0][0] == board[1][1] && board[0][0] == board[2][2])){
        return true;
        }
    if ((board[1][1] != ' ') && (board[1][1] == board[1][0] && board[1][1] == board[1][2] ||
        board[1][1] == board[0][1] && board[1][1] == board[2][1] ||
        board[1][1] == board[2][0] && board[1][1] == board[0][2])){
        return true;
        }
    if ((board[2][2] != ' ') && (board[2][2] == board[0][2] && board[2][2] == board[1][2] ||
        board[2][2] == board[2][0] && board[2][2] == board[2][1])){
        return true;
        }
    return false;
}

string game :: whoWon(const string player){
    if (gameOver())
        return player;
    return "nobody";
}

void game :: playGame(aayushPlayer P1, computerPlayer P2){
    cout << P1.name << " symbol : " << P1.symbol << endl;
    cout << P2.name << " symbol : " << P2.symbol << endl << endl;
    char aayushSymbol = P1.symbol;
    char cpuSymbol = P2.symbol;
    int moves = 0;
    while (moves < 9){
        cout << "AAYUSH'S TURN\n";
        const cell move1 = nextMove();
        board[move1.row][move1.column] = aayushSymbol;
        moves++;
        printBoard();
        string result1 = whoWon(P1.name);
        if (result1 != "nobody"){
            cout << P1.name << " WIN!!\n";
            break;
        }
        if (moves == 9){
            cout << "DRAW\n";
            break;
        }
        const cell move2 = nextMove();
        board[move2.row][move2.column] = cpuSymbol;
        moves++;
        cout << "CPU'S TURN\n";
        printBoard();
        string result2 = whoWon(P2.name);
        if (result2 != "nobody"){
            cout << P2.name << " WIN!!\n";
            break;
        }
    }
}

int main(){
    aayushPlayer P1;
    computerPlayer P2;
    P1.setName("Aayush");
    P2.setName("CPU");
    P1.setSymbol('X');
    P2.setSymbol('0');
    game myGame;
    myGame.playGame(P1, P2);
    return 0;
}
