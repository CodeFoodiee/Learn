#include<iostream>
#include<vector>
using namespace std;

bool sorted(vector<int> arr){
	int count = 0;
	int n = arr.size();
	for(int i = 0 ; i < n-1 ; i++){
			if(arr[i] > arr[(i+1)%n]){
				count++;
			}
	}
	return count <= 1;
}

int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;

	vector<int> arr(n);

	cout<<"Enter the elements of the array : ";
	
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}

	if(sorted(arr)){
		cout<<"sorted";
	}
	else { 
		cout<<" Not sorted";
	}

	return 0;
}
