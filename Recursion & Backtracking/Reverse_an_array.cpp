#include <iostream>
#include <vector>
using namespace std;
int m;
// void reverseAnArray(int arr[], int f, int l){
//     if(f >= l)
//     return;

//     swap(arr[f], arr[l]);

//     reverseAnArray(arr, f + 1, l - 1);
// }

void print(vector<int> v, int f)
{
    if (f >= v.size())
        return;

    cout << v[f] << " ";

    print(v, f + 1);
}
void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    if (m >= (float)arr.size() / 2)
        return;
    if (m == 0)
    {
        swap(arr[m], arr[arr.size() - m - 1]);
        reverseArray(arr, m + 1);
    }
    else
    {
        swap(arr[m], arr[arr.size() - 1]);
        reverseArray(arr, m + 1);
    }
}

bool isPalindrome(string s, int size, int p)
{
    if (p >= (float)size / 2)
        return true;

    if (s[p] != s[size - p - 1])
        return false;

    isPalindrome(s, size, p + 1);
}

int nthFiboNo(int n)
{
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    return nthFiboNo(n - 1) + nthFiboNo(n - 2);
}

void subset(int arr[], int size, int ind, vector<int> &v)
{
    if (ind == size)
    {
        for (int x : v)
        {
            cout << x << " ";
        }
        if (v.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;

        subset(arr, size, ind + 1, v); // not take;
        v.push_back(arr[ind]);
        subset(arr, size, ind + 1, v); // take
        v.pop_back();
    }
}

int firstIndexOfElement(int arr[], int n, int size)
{
    if (size < 0)
        return -1;

    int ind = firstIndexOfElement(arr, n, size - 1);
    if (arr[ind] == n)
    {
        return ind;
    }
    else
        return size;
}

int lastIndexOfElement(int arr[], int size, int n, int &p)
{
    if (size < 0)
        return 0;
    int in = lastIndexOfElement(arr, size - 1, n, p);
    if (arr[in] == n)
    {
        p = in;
        return size;
    }

    else
        return size;
}

int countNoOfZeroes(int n, int c)
{
    if (n / 10 == NULL)
        return c + 1;

    if (n % 10 == 0)
        c++;

    countNoOfZeroes(n / 10, c);
}

// void replaceHelper(char str[], int start){
//     if(str[start] == '\0'){
//         return;
//     } //base case
//     replaceHelper(str, start+1); //recursive call

//     //'small work'
//     if(str[start] == 'p' && str[start+1] == 'i'){
//         for(int i=strlen(str); i>=start+2;i--){
//             str[i+2]=str[i];
//         }
//         str[start] = '3';
//         str[start + 1] = '.';
//         str[start + 2] = '1';
//         str[start + 3] = '4';
//     }
// }

// void replace(char input[]) {
//     replaceHelper(input, 0);
// }

string convertPiToVal(string c, int ind, string &emp)
{
    if (c.empty())
        return "Empty";

    if (ind == c.size())
        return emp;

    if (c[ind] == 'p' && c[ind + 1] == 'i')
    {
        emp += "3.14";
        convertPiToVal(c, ind + 2, emp);
    }
    else
    {
        emp += c[ind];
        convertPiToVal(c, ind + 1, emp);
    }

    return emp;
}
int size(string str)
{
    int i = 0;
    int count = 0;
    while (str[i] != NULL)
    {
        count++;
        i++;
    }
    return count;
}
string Shift(string &s, int ind)
{
    for (int i = ind; i < size(s); i++)
    {
        s[i] = s[i + 1];
    }

}
string removeX(string &s, int ind, char word)
{
    if (ind == s.size())
        return s;

    if (s[ind] == word)
    {
        Shift(s, ind);
        if(s[ind + 1] == NULL)
       removeX(s, ind + 1, word);
        else
       removeX(s, ind, word);
    }
    else
    {
       removeX(s, ind + 1, word);
    }

    return s;
}

int main()
{
    // vector <int> v = { 1, 3, 4, 5};
    // reverseArray(v, 0);
    // print(v, 0);

    // if(isPalindrome("heeh", 4, 0))
    // cout << "true";
    // else
    // cout << "false";
    // cout << nthFiboNo(5);
    int arr[] = {1, 3, 3, 3};
    // cout << firstIndexOfElement(arr, 3, 3);
    // int p = 0;
    // lastIndexOfElement(arr, 4, 3, p);
    // cout << p;
    // vector<int> v;
    // subset(arr, 3, 0, v);
    // int p = 504060;
    // cout <<  countNoOfZeroes(p, -1);
    // string s = "pippippppi";
    // string a;
    // string ans;
    // ans = convertPiToVal(s, 0, a);
    // cout << ans;
    // string s = "kajal";
    // int ind = 0;
    
    // cout << removeX(s , ind, 'k');
  

    return 0;
}