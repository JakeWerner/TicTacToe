#include <iostream>
using namespace std;

#ifndef TICTACTOE
#define TICTACTOE
class TicTacToe{
    public:
        void CreateBoard();
        void DisplayBoard();
        int *GetPlayerChoice();
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

int *TicTacToe::GetPlayerChoice(){
    int input;
    bool loop = true;
    static int arr[2];
    while(loop){
        cout << "Select where you want to play" << endl;
        cout << "1 | 2 | 3" << endl;
        cout << "4 | 5 | 6" << endl;
        cout << "7 | 8 | 9" << endl;
        cout << "Input: ";
        cin >> input;

        switch (input){
            case 1:
                if(board[0][0] == 0){
                    arr[0] = 0;
                    arr[1] = 0;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 2:
                if(board[0][1] == 0){
                    arr[0] = 0;
                    arr[1] = 1;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 3:
                if(board[0][2] == 0){
                    arr[0] = 0;
                    arr[1] = 2;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 4:
                if(board[1][0] == 0){
                    arr[0] = 1;
                    arr[1] = 0;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 5:
                if(board[1][1] == 0){
                    arr[0] = 1;
                    arr[1] = 1;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 6:
                if(board[1][2] == 0){
                    arr[0] = 1;
                    arr[1] = 2;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 7:
                if(board[2][0] == 0){
                    arr[0] = 2;
                    arr[1] = 0;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break; 
            case 8:
                if(board[2][1] == 0){
                    arr[0] = 2;
                    arr[1] = 1;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            case 9:
                if(board[2][2] == 0){
                    arr[0] = 2;
                    arr[1] = 2;
                    return arr;
                }
                else{
                    cout << "ERROR: Cannot play at that spot. Try again" << endl;
                }
            break;
            default:
                cout << "ERROR: Not a valid move. Try again." << endl;
            break;
        }
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
