#include <iostream>
using namespace std;

int maxScore(string arr[], int size, int freq[], int score[], int index){
        if(index == size){
            return 0;
        }
        int sno = maxScore(arr, size, freq, score, index + 1);
        string s = arr[index];
        bool flag = true;
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            freq[int(ch - 'a')]--;
            if(int(ch - 'a') == 0){
                flag = false;
            }

        }
        int cscore = 0;
        int ascore = 0;
        if(flag){
            for(int i = 0; i < s.length(); i++){
                cscore += score[int(s[i] - 'a')];
            }
            ascore = cscore + maxScore(arr, size, freq, score, index + 1);
        }
        for(int i = 0; i < s.length(); i++){
            char ch = s[i];
            freq[int(ch - 'a')]++;
        }
         
        return max(sno, ascore);
}

int main(){

    string arr[] = {"dog", "cat", "dad", "good"};
    int freq[] = {1, 1, 1, 4, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int score[] = {1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cout << maxScore(arr, 4, freq, score, 0);
}