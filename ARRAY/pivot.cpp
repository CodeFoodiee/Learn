#include<iostream>
#include<vector>
using namespace std;

int pivotindex(vector<int> arr){	
		for(int i = 0 ; i < arr.size() ; i++){
			int leftsum = 0 , rightsum = 0;	
			for(int j = 0 ; j < i; j++){
				leftsum += arr[j];
			for(int k = i + 1 ; k < arr.size() ; k++){
				rightsum += arr[k];
			if(leftsum == rightsum){
				cout<<"Pivot at index : "<<i<<endl;
				return i;
				}
			}
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

	cout<<"Enter the elements of array : "<<endl;
	for(int i = 0 ; i < arr.size() ; i++){
		cin>>arr[i];
	}
	
	cout<<pivotindex(arr);
	return 0;
}
