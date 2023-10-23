#include <iostream>
using namespace std;

void printBoard(char arr[][10], int sizeOfBoard)
{
    for (int i = 0; i < sizeOfBoard; i++)
    {
        for (int j = 0; j < sizeOfBoard; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool placableVertically(char board[][10], int sizeOfBoard, string word, int r, int c)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (r + i >= sizeOfBoard || board[r + i][c] == '+' || board[r + i][c] != '-' && board[r + i][c] != word[i])
            return false;
    }

    if (r - 1 >= 0 && board[r - 1][c] != '+')
    {
        return false;
    }

    if (r + word.size() < sizeOfBoard && board[r + word.size()][c] != '+')
    {
        return false;
    }
    return true;
}

void placeVertically(char board[][10], bool marked[][10], int sizeOfBoard, string word, int r, int c)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (board[r + i][c] == '-')
        {
            board[r + i][c] = word[i];
            marked[r + i][c] = true;
        }
    }
}

void unplaceVertically(char board[][10], bool marked[][10], int sizeOfBoard, string word, int r, int c)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (marked[r + i][c] == true)
        {
            board[r + i][c] = '-';
        }
    }
}

// Horizontal Placing Process

bool placableHorizontally(char board[][10], int sizeOfBoard, string word, int r, int c)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (c + i >= sizeOfBoard || board[r][c + i] == '+' || board[r][c + i] != '-' && board[r][c + i] != word[i])
            return false;
    }

    if (c - 1 >= 0 && board[r][c - 1] != '+')
    {
        return false;
    }

    if (c + word.size() < sizeOfBoard && board[r][c + word.size()] != '+')
    {
        return false;
    }
    return true;
}

void placeHorizontally(char board[][10], bool marked[][10], int sizeOfBoard, string word, int r, int c)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (board[r][c + i] == '-')
        {
            board[r][c + i] = word[i];
            marked[r][c + i] = true;
        }
    }
}

void unplaceHorizontally(char board[][10], bool marked[][10], int sizeOfBoard, string word, int r, int c)
{
    for (int i = 0; i < word.size(); i++)
    {
        if (marked[r][c + i] == true)
        {
            board[r][c + i] = '-';
        }
    }
}


    void solveCrossword(char board[][10], int sizeOfBoard, string words[], int noOfWords, int cpw)
    {

        if (cpw == noOfWords)
        {
            printBoard(board, sizeOfBoard);
            return;
        }

        for (int j = 0; j < sizeOfBoard; j++)
        {
            for (int k = 0; k < sizeOfBoard; k++)
            {
                if (board[j][k] != '+' || board[j][k] == words[cpw][0])
                {
                    if (placableVertically(board, sizeOfBoard, words[cpw], j, k))
                    {
                        bool marked[10][10];
                        placeVertically(board, marked, sizeOfBoard, words[cpw], j, k);
                        solveCrossword(board, sizeOfBoard, words, noOfWords, cpw + 1);
                        unplaceVertically(board, marked, sizeOfBoard, words[cpw], j, k);
                    }

                    if (placableHorizontally(board, sizeOfBoard, words[cpw], j, k))
                    {
                        bool marked[10][10];
                        placeHorizontally(board, marked, sizeOfBoard, words[cpw], j, k);
                        solveCrossword(board, sizeOfBoard, words, noOfWords, cpw + 1);
                        unplaceHorizontally(board, marked, sizeOfBoard, words[cpw], j, k);
                    }
                }
            }
        }
    }
    int main()
    {
    
    char board[10][10] = {{'+', '-', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '-', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '-', '+', '+', '+', '+', '+', '+', '+', '+'},
                          {'+', '-', '-', '-', '-', '-', '+', '+', '+', '+'},
                          {'+', '-', '+', '+', '+', '-', '+', '+', '+', '+'},
                          {'+', '-', '+', '+', '+', '-', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '-', '+', '+', '+', '+'},
                          {'+', '+', '-', '-', '-', '-', '-', '-', '+', '+'},
                          {'+', '+', '+', '+', '+', '-', '+', '+', '+', '+'},
                          {'+', '+', '+', '+', '+', '-', '+', '+', '+', '+'}};
    
    string words[] = {"DELHI", "ICELAND", "ANKARA", "LONDON"};

    solveCrossword(board, 10, words, 4, 0);

    return 0;
    }