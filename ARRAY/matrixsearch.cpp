#include<iostream>
using namespace std;
#define MAX 100

void Lsearch(int n, int m, int arr[][MAX],int x){
	bool found = false;
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < m ; j++){
			if(arr[i][j] == x){
			cout<<"Element found at index : "<<"arr["<<i<<"]["<<j<<"]";
			found = true;
			return;
			}
		}
	}
if(!found) cout<<"Element not found!";
}

int main(){
	int n,m;
	cout<<"Enter the number of rows : ";
	cin>>n;

	cout<<"Enter the number of columns : ";
	cin>>m;

	int arr[MAX][MAX];

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cout<<"arr["<<i<<"]["<<j<<"]";
			cin>>arr[i][j];
		}
	}

	int target;
	cout<<"Enter the element to find : ";
	cin>>target;

	Lsearch(n,m,arr,target);

return 0;
}
