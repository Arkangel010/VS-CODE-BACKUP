#include <iostream>
#include <fstream>
using namespace std;

int main(){
         ifstream obj("hi.txt");
         ofstream obj1("hi.txt",ios :: out);
       
         

         int lno = 2;
       cout << obj.tellg() << endl;
       string s;
       string line = "hi";
       int a;
       int i = 0;
       char c;
       while(i < lno ){

       getline(obj,s);
       cout << s << endl;
      a = obj.tellg();
      i++;
       }
        a = a -2;
        obj1.seekp(a);
      cout << obj1.tellp() << endl;
      obj1 << line;
      
     

      //  cout << s << endl;
      // cout << obj.tellg() << endl;

      
     
      // obj.get(c);
      
      
      // cout << obj.tellg() <<endl;

      // obj.seekg(a);

      // obj.tellg();

      // obj.get(c);
      // obj.get(c);
      // cout << c;

      // cout << "done";

      

        return 0;
}