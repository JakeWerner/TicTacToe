#include <iostream>
using namespace std;

#ifndef TICTACTOE
#define TICTACTOE
class TicTacToe{
    public:
        void CreateBoard();
    private:
        int board[3][3];
};

#endif

void TicTacToe::CreateBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            board[i][j] = 0;
        }
    }
}

int main(){
    TicTacToe ttc;
    ttc.CreateBoard();
}