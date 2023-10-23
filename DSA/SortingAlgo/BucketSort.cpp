#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
void bucketSort(float arr[], int size)
{
    vector<vector<float>> v(size, vector<float>());

    for (int i = 0; i < size; i++)
    {
        int in = arr[i] * size;
        v[in].push_back(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {

        sort(v[i].begin(), v[i].end());
    }
    int k = 0;
    for(int i = 0 ; i < v.size(); i++){
        for(int j = 0 ; j < v[i].size() ; j++){
            arr[k++] = v[i][j];
        }
    }
}
int main()
{
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39};
    int size = 8;
    bucketSort(arr,8);

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ; 
    }
    return 0;
}
