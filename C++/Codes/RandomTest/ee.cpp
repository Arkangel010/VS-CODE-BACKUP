vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	for(int i = 0 ; i < n ; i++){
		for (int j = i + 1 ; j < n ; j++){
			if ((arr[i] + arr[j]) == target)
			cout << arr[i] << "," << arr[j];
		}
		cout << endl;
	}
}
  