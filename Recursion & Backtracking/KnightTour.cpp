#include <iostream>
using namespace std;

void displayboard(int arr[][5], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printMoves(int chess[][5], int size, int row, int col, int move){

    if(row < 0 || col < 0 || row >= size || col >= size || chess[row][col] != 0){
        return;
    }
    if(move == size * size){
        chess[row][col] = move;
        displayboard(chess, size);
        cout << endl;
        chess[row][col] = 0;
        return;
    }

    chess[row][col] = move;

    printMoves(chess, size, row - 2, col + 1, move + 1);
    printMoves(chess, size, row - 1, col + 2, move + 1);
    printMoves(chess, size, row + 1, col + 2, move + 1);
    printMoves(chess, size, row + 2, col + 1, move + 1);
    printMoves(chess, size, row + 2, col - 1, move + 1);
    printMoves(chess, size, row + 1, col - 2, move + 1);
    printMoves(chess, size, row - 1, col - 2, move + 1);
    printMoves(chess, size, row - 2, col - 1, move + 1);

    chess[row][col] = 0;
    
}


    int main(){
        int board[5][5]{0};
        printMoves(board, 5, 2, 0, 1);
        
        return 0;
    }
