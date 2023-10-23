// try for sorting negative no as well by adding the max negative no firstly within the array and after sorting reducing the max negative element.


#include <iostream>
using namespace std;

void disp(int arr[],int size){
     for(int i = 0 ; i < size; i++){
        cout << arr[i];
    }
    cout << endl;
}

void CountSort(int arr[],int size){
    //finding max element
    int in;
    int in2;
    int val;
   int max = 0;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > max)
        max = arr[i];
    }

    int freq[max + 1] ={0};

   // making frequency array
    for(int i = 0 ; i < size ; i++){
         
        freq[arr[i]] ++;
    }
     
    int CulFreq[max];

    int c = 0;
    // making cumilative array
    for(int i = 0 ; i < size ; i++){

        c += freq[i];
        CulFreq[i] = c;
    }

   
    int sorted[size];

    //sorting array
    for(int i = size -1 ; i >= 0 ; i--){
        sorted[--CulFreq[arr[i]]] = arr[i];
        
    }
   

  
    for(int i = 0; i < size ; i++){
    arr[i] = sorted[i];
    }


}



int main(){
    int arr[] = {1,5,2,0,3,4};

    CountSort(arr,6);
    disp(arr,6);
    return 0;
}