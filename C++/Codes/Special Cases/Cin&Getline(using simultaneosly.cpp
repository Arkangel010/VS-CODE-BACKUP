// C++ program for the above solution
//https://www.geeksforgeeks.org/problem-with-getline-after-cin/
//Do refer the above link
//using cin and getline simultaneously.
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int fav_no;
	string name;
	cout << "Type your favourite number: ";
	cin >> fav_no;

	cout << "Type your name: ";

	// Usage of std::ws will extract
	// all the whitespace character
	getline(cin >> ws, name);

	cout << name
		<< ", your favourite number is : "
		<< fav_no;
	return 0;
}
