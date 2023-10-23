#include <iostream>
using namespace std;

void printBoard(int arr[][], int sizeOfBoard){
    for(int i = 0; i < sizeOfBoard; i++){
        for(int j = 0; j < sizeOfBoard; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool placableVertically(char board[][], int sizeOfBoard, string word, int r, int c){
    for(int i = 0; i < word.size(); i++){
       if (board[r + i][c] == '+' || r + i >= sizeOfBoard || board[r + i][c] != '-' && board[r + i][c] != word[i])
            return false;
    }

    if(r - 1 > 0 && board[r - 1][c] != '+'){
        return false;
    }

    if(r + word.size() < sizeOfBoard && board[r + word.size()][c] != '+'){
        return false;
    }
    return true;
}

void placeVertically(char board[][], bool marked[][], int sizeOfBoard, string word,int r, int c){
    for(int i = 0; i < word.size(); i++){
        if(board[r + i][c] != '-')
        board[r + i][c] = word[i];
    }
}

void unplaceVertically(char board[][], int sizeOfBoard, string word, int r, int c){
    for(int i = 0; i < word.size(); i++){
        if(c - 1 > 0 && board[r + i][c - 1] != '+' || board[r + i][c - 1] != '-'){
            continue;
        }
    }
}


void solveCrossword(char board[][], int sizeOfBoard, string words[], int noOfWords, int cpw){

        if(cpw == noOfWords){
            printBoard(board, sizeOfBoard);
            return;
        }

        for(int j = 0; j < sizeOfBoard; j++){
            for(int k = 0; k < sizeOfBoard; k++){
                if(board[i][j] != '+' || board[i][j] == words[cpw][0]){
                    if(placableVertically(board, sizeOfBoard, words[cpw], j, k)){
                        bool marked[][];
                        placeVertically(board, marked, sizeOfBoard, words[cpw], j, k);
                        solveCrossword(board, sizeOfBoard, words, noOfWords, cpw + 1);
                        unplaceVertically(board, sizeOfBoard, words[cpw], j, k);
                    }
                    
                    if(placableHorizontally(board, sizeOfBoard, words[cpw], j, k)){
                        placeHorizontally(board, sizeOfBoard,  words[cpw], j, k);
                        solveCrossword(board, sizeOfBoard, words, noOfWords, cpw + 1);
                        unplaceHorizontally(board, sizeOfBoard, words[cpw], j, k);
                    }
                }
            }
        }
    
}
int main(){

    return 0;

}