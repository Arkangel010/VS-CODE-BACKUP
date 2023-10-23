#include <iostream>
using namespace std;
void disp(int arr[],int size){
     for(int i = 0 ; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void copy(int arr[],int arr2[],int s){
     for(int i = 0 ; i < s ; i++){
        arr2[i] = arr[i];
    }
}
void radixSort(int arr[],int size){
    int max = 0;
    
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > max)
        max = arr[i];  
    }
    int rep = 0;

    while (max > 0)
    {
        max = max / 10;
        rep++;
    }
    
   
    int sort[size];
    copy(arr,sort,size);
    int f = 10;
    int g = 1;
    //main operation
    for( int j = 0 ; j < rep ; j++){

    int freq[10]= {0};
    int c = 0;
    int CulFreq[10]= {0};

    for(int i = 0 ;i < size ; i++){
        freq[(arr[i]%f)/g]++ ;
    }
    disp(freq,10);
    
     for(int i = 0 ; i < 10 ; i++){

        c += freq[i];
        CulFreq[i] = c;
    }

    for(int i = size-1 ; i >= 0 ; i--){
        sort[--CulFreq[(arr[i]%f)/g]] = arr[i];
         
    }
    copy(sort,arr,size);
     disp(sort,size);
    cout << endl;
    f *= 10;
    g *= 10;
    }
    
   
   
}

int main(){
    int arr[] = {23,540,65,4,76};
    radixSort(arr,5);

    return 0;
}