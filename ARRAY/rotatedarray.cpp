#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int>& arr,int i , int j){
	int temp = (arr)[i];
	arr[i] = (arr)[j];
	arr[j] = temp; 
}
void shift_right(vector<int>& arr,int k){
	int size = arr.size();
	for(int i = 0; i < k ;i++)
		for(int j = size - 1 ; j > 0 ; j--)
			swap(arr,j,j-1);
}

int main(){
	vector<int> arr;
	
	int n,k;
	
	cout<<"Enter the size of array : ";
	cin>>n;
	
	arr.resize(n);
		
	cout<<"Enter the elements of the array : "<<endl;

	for(int i = 0 ; i < arr.size() ; i++){
	cin>>arr[i];
	}

	cout<<"Enter the index to shift upto : ";
	cin>>k;

	
	shift_right(arr,k);
	for(int i = 0 ; i < arr.size() ; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}

