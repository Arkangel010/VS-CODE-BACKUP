#include <iostream>
using namespace std;
int i = 1;
int n;
string Name;
void name()
{
    if (i == n)
        return;

    cout << Name << endl;
    i++;
    name();
}

void no()
{
    if (i > n)
        return;

    cout << i << " ";
    i++;
    no();
}
void noRev()
{
    if (n < i)
        return;

    cout << n << " ";
    n--;
    noRev();
}
void noBacktracking(int n)
{
    if (n < 1)
        return;

    noBacktracking(n - 1);
    cout << n << " ";
}
void noRevBacktracking(int n)
{
    cout << n << " ";
    if (n < 1)
        return;
    noRevBacktracking(n - 1);
}

void sumP(int n, int sum)
{ // Paramaterised way
    if (n < 1)
    {
        cout << sum;
        return;
    }

    sumP(n - 1, sum + n);
}
int sumF(int n)
{ // Functional way
    if (n < 1)
        return 0;

    return n + sumF(n - 1);
}

void factP(int n, int f)
{
    if (n < 0)
    {
        cout << f;
        return;
    }
    factP(n - 1, f * n);
}
void rev(int arr[], int f, int l)
{
    if (f >= l)
    {
        return;
    }

    swap(arr[f], arr[l]);
    rev(arr, f + 1, l - 1);
}

void printArr(int arr[], int p, int i)
{
    if (i >= p)
        return;

    cout << arr[i] << " ";
    printArr(arr, p, i + 1);
}

int charToint(char arr[], int ind)
{
    if (arr[ind] != NULL)
        return arr[ind] - '0';
    else
        return -1;
}

int convertToInt(char arr[], int size)
{
    if (size == 0)
        return 0;

    return (10 * (convertToInt(arr, size - 1))) + charToint(arr, size - 1);
}

string shifter(string &str, int ind)
{
    int i = str.size();
    while(i != ind){
        if(i == str.size() ){
            str += str[i -1];
        }
        else{
            str[i] = str[i - 1];
        }

        i--;
    }
    return str;
}

string pairStar(string &str, int ind ,int size){
    if(ind > size)
    return str;

    if(str[ind] == str[ind + 1]){
        shifter(str, ind);
        str[ind + 1] = '*';
        pairStar(str, ind + 2, size);
    }
    else{
        pairStar(str, ind + 1, size);
    }
   return str;
}

void hanoiTower(int n, int source, int helper, int destination){
    if(n == 0) return;
    hanoiTower(n -1,  source, destination, helper);
    cout << "Put one bid from " << source << " to " << destination << endl;
    hanoiTower(n -1, helper, source, destination);

}

string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string helper(string s, int ind, string output){
        if(ind == s.size())
        return output;
        
      
        for(ind; ind < s.size(); ind++){
             helper(s, ind, output);
        }
       
        output += s[ind];
          return output;
}

void combination(int no, string arr[], string output){
    if(no == 0){
         cout <<  output << endl;
    }
    int num = no % 10;
    string s = arr[num];
    for(int i = 0; i < s.size(); i++){
        combination(no / 10, arr, output + s[i]);
    }    
}


int main()
{
    Name = "Aman";
    n = 5;
    // int arr[] = {1, 2, 3};
    // name();
    // no();
    // noRev();
    // noRevBacktracking(5);
    // sumP(5, 0);
    // cout << sumF(5);
    // factP(5, 1);
    //    rev(arr, 0, 2);
    //     printArr(arr, 3, 0);

    //     char arr[] = "154344";
    //    cout << convertToInt(arr, 6);
    // string s = "abbaaab";
    // cout << pairStar(s, 0, 7);
    //hanoiTower(2, 1, 2, 3);
    string a;
    combination(23, arr, a);
    return 0;
}