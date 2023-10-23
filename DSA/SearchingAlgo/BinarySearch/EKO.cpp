#include <iostream>
#include <vector> 
using namespace std;

int machine(vector<int> &listOfHeight, int reqHeight, int heightOfSaw){
	
	int bucketCapacity = 0;
	
	for(int i = 0; i < listOfHeight.size(); i++){
		
		if(bucketCapacity < reqHeight && listOfHeight[i] - heightOfSaw > 0){
			
			bucketCapacity += listOfHeight[i] - heightOfSaw;
			
		}
		
	}
	
	return bucketCapacity;
	
}

bool jack(vector<int> &listOfHeight, int reqHeight, int HeightOfSaw)
{
	
	if(machine(listOfHeight, reqHeight, HeightOfSaw) >= reqHeight){
		
		return true;
		
	}
	
	return false;
	
}
int heightOfSaw(vector<int> &listOfHeight, int reqHeight)
{
	
	int maxHeight = 0;
	
	for(int i = 0; i < listOfHeight.size(); i++)
	{
		
		if(maxHeight < listOfHeight[i])
		{
			
			maxHeight = listOfHeight[i];
			
		}
		
	}
	
	int min = 0;
	int max = maxHeight;
	int sawHeight = -1;
	
	while(min <= max){
		
		int height = min +(max - min)/2;
		
		if(jack(listOfHeight,reqHeight, height)){
			
			sawHeight = height;
			min = height + 1;
			
		}
		else{
			
			max = height - 1;
			
		}
		
	}
	
	return sawHeight;
}
int main() {
	// your code goes here
	int noOfTrees = 4;
	int reqHeight = 7;
	vector<int> listOfHeight{20, 15, 10, 17};
	
	// cin >> noOfTrees;
	// cin >> reqHeight;
	
	// while(noOfTrees--){
		
	// 	int temp;
	// 	cin >> temp;
	// 	listOfHeight.push_back(temp);
		
	// }
	
	cout << heightOfSaw(listOfHeight, reqHeight);
	
	return 0;
	
}