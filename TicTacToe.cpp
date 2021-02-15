#include <iostream>
using namespace std;

#ifndef TICTACTOE
#define TICTACTOE
class TicTacToe{
    public:
        void CreateBoard();
        void DisplayBoard();
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

void TicTacToe::DisplayBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == 0){
                cout << " ⬜️ ";
            }
            if(board[i][j] == 1){
                cout << " ✖️️ ";
            }
            if(board[i][j] == 2){
                cout << " 🔘️️ ";
            }
        }
        cout << endl;
    }
}

int main(){
    TicTacToe ttc;
    ttc.CreateBoard();
    ttc.DisplayBoard();
}
