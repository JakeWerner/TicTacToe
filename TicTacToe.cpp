#include <iostream>
using namespace std;

#ifndef TICTACTOE
#define TICTACTOE
class TicTacToe{
    public:
        void CreateBoard();
        void DisplayBoard();
        void PlaceMarker(int arr[]);
    private:
        int board[3][3];
        int player;
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
                cout << "| ⬜️ ";
            }
            if(board[i][j] == 1){
                cout << "| ✖️️ ";
            }
            if(board[i][j] == 2){
                cout << "| 🔘️️ ";
            }
        }
        cout << "|" <<endl;

    }
}

void TicTacToe::PlaceMarker(int arr[]){
    int row = arr[0];
    int col = arr[1];
    if(player == 1){
        board[row][col] = 1;
    }
    if(player == 2){
        board[row][col] = 2;
    }
}

int main(){
    TicTacToe ttc;
    ttc.CreateBoard();
    ttc.DisplayBoard();
}
