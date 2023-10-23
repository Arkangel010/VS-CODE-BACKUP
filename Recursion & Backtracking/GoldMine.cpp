#include <iostream>
#include <vector>
using namespace std;

void collectGold(int maze[][7], int size, bool visit[][7], int r, int c, vector<int> &bag){
    if(r < 0 || c < 0 || r > size - 1 || c > size - 1|| visit[r][c] == true || maze[r][c] == 0){
        return;
    }
    bag.push_back(maze[r][c]);
    visit[r][c] = true;

    collectGold(maze, size, visit, r - 1, c, bag);
    collectGold(maze, size, visit, r, c + 1, bag);
    collectGold(maze, size, visit, r + 1, c, bag);
    collectGold(maze, size, visit, r, c - 1, bag);
    
}

int getMax(int maze[][7], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            
            if (maze[i][j] != 0)
            {
                vector<int> bag;
                bool visit[7][7];
                collectGold(maze, size, visit, i, j, bag);
                int count = 0;
                for (auto x : bag)
                {
                    count += x;
                }
                if (count > max)
                {
                    max = count;
                }
            }
        }
    }
    return max;
}





int main()
{
    int maze[7][7] = {{10, 0, 100, 200, 0, 8, 0},
                     {20, 0, 0, 0, 0, 6, 0},
                     {30, 0, 0, 9, 12, 3, 4},
                     {40, 0, 2, 5, 8, 3, 11},
                     {0, 0, 0, 0, 0, 9, 0},
                     {5, 6, 7, 0, 7, 4, 2},
                     {8, 9, 10, 0, 1, 10, 8}};
    

    cout << getMax(maze, 7);
    return 0;
}