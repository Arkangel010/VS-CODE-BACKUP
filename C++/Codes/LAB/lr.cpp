#include<iostream>
#include<fstream>
using namespace std;

int main(){
  string k;
    ifstream file("kalu.txt");
    if(file){
       cout << "file opened";
       cout << endl;

    }

    else
    cout <<"error";

    while(file.good()){
      getline(file,k);
      cout << k << endl;

    }
 file.close();
 return 0;

    
}
