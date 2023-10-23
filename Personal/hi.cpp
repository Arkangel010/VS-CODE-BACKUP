#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string f1 , f2, temp;
    
    ofstream file11("file1.txt");
    ofstream file12("file2.txt");
    
    cout << "Enter the data to be inserted in file 1: ";
    getline(cin >> ws, f1);
    
    cout << "Enter the data to be inserted in file 2: "; 
    getline(cin >> ws, f2);
    
    file11 << f1;
    
    
    
    
    
    ofstream Mfile("file3.txt");
    
    cout << "Merging files..." << endl;
    
    cout << "The contents of merged file are: ";
    
    ifstream file21("file1.txt");
    ifstream file22("file2.txt");
    getline(file21, temp);
    cout << temp;
    
    while(getline(file21, temp)){
        cout << temp << endl;
    }
        while(getline(file21, temp)){
        Mfile << f1;
    }
    while(getline(file21,temp)){
        Mfile << f2;
    }
    
    ifstream file3("file3.txt");
    
    while(getline(file3, temp)){
        cout << temp;
    }
    file3.close();
    
    return 0;
}