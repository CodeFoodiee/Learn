#include<iostream>
#include<vector>
using namespace std;

void zeroatend(vector<int> & arr){
int j = 0;
	for(int i = 0 ; i < arr.size() ; i++){
		if(arr[i] != 0){
			swap(arr[i] , arr[j]);
			j++;
		}
	}		
}

int main(){
	vector<int> arr;

	int n;

	cout<<"Enter the size of array : ";
	cin>>n;

	arr.resize(n);
	cout<<"Enter the elements of the array : ";
	for(int i = 0 ; i < arr.size() ; i++){
		cin>>arr[i];
	}

	zeroatend(arr);

	for(int i = 0 ; i < arr.size() ; i++){
		cout<<arr[i]<<" ";
	}

return 0;
}
