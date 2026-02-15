#include<iostream>
#include<vector>
using namespace std;

int frequency(vector<int> arr){
	vector<int> freq{10,0};
	for(int i = 0 ; i < arr.size() ; i++){
		freq[arr[i]]++;
	}
	
	for(int i = 0 ; i < arr.size() ; i++){
		if(freq[arr[i]] == 1){
			return arr[i];
		}
	}
	return -1;
}

int main(){

	vector<int> arr;
	int n;

	cout<<"Enter the size of array : ";
	cin>>n;

	arr.resize(n);
	
	cout<<"Enter the elements : "<<endl;
	
	for(int i = 0 ; i < arr.size() ; i++){
		cin>>arr[i];
	}

	cout<<"Element with frequency with 1 is : "<<frequency(arr);

	return 0;
} 


