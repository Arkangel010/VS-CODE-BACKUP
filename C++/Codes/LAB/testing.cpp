
void swap(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}
int partition(int arr[], int f, int l){
    int in = f - 1;
    int pi = arr[l];
    
    for(int j = f; j < l - 1; j++){
        if(arr[j] < pi){
            in++;
            swap(arr[in], arr[j]);
        }
    }
    
    swap(arr[in + 1], arr[l]);
    return (in + 1);
}
void quickSort(int arr[], int f,  int l){
    if(f >= l)
    return;
    
    int q = partition(arr,f,l);
    quickSort(arr, f, q-1);
    quickSort(arr,q + 1, l);
    
}
#include <iostream>

using namespace std;
int main() {
  int n, arr[100], i;
  cout << "Enter size of the array: ";
  cin >> n;
  cout << "Enter array elements: ";
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  quickSort(arr, 0, n - 1);
  cout << "Array after sorting is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
#include <iostream>

using namespace std;
int main() {
  int n, arr[100], i;
  cout << "Enter size of the array: ";
  cin >> n;
  cout << "Enter array elements: ";
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  quickSort(arr, 0, n - 1);
  cout << "Array after sorting is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}