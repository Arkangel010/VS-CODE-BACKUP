#include<iostream>
using namespace std ;
class work{
   public:
   work(){
      cout<<"hello"<<endl;
   }
   ~work(){
      cout<<"hello"<<endl;
   }
  int sum(int a ,int b){
   int c = a+b;
   return c;
  }
  float sum(float a , float b){
   float c = a + b;
   return c;

  }
  template< class T >
   T sub(T v, T j){
   T g = v-j;
   return g;
  }

};
int main(){
//    float a,b,e,f,v,j;
//    cout<<"the value of a and b : "<<endl;
//    cout<<"the value of e and f : "<<endl;
//    cout<<"the value of v and j : "<<endl;
//    cin>>a>>b>>e>>f>>v>>j;
//  work obj;
//  obj.sum(a,b);
//   cout<<obj.sum(a,b)<<endl;
//  cout<<obj.sum(e,f)<<endl;
//  cout<<obj.sub(v,j)<<endl;
cout << "hello" << endl;
string append;
 cout << "Enter category : ";
            getline(cin,append);
           cout << "Enter fd : ";

           
 return 0;
}