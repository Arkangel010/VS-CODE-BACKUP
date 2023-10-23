#include <iostream>
#include <vector>
using namespace std;

void printPowerSet(int arr[], int size, vector<int> tempArr){

  if(size < 0) return;

  if(tempArr.size() > 0){

    for(auto a : tempArr){

      cout << a << " ";

    }

    cout << endl;
    return;
  }

  

  printPowerSet(arr, size - 1, tempArr);
  tempArr.push_back(arr[size]);

  

  printPowerSet(arr, size - 1, tempArr);
  tempArr.pop_back();

}

int main(){
  int arr[] = {1, 2, 3, 4};
  vector<int> p;
 printPowerSet(arr, 3, p);
  return 0;
}