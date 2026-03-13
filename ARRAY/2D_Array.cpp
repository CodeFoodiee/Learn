#include<iostream>
using namespace std;
#define MAX 100

void rowmajor(int n,int m, int arr[][MAX]){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cout<<arr[i][j];
		}
	}
}

void columnmajor(int n , int m, int arr[][MAX]){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cout<<arr[j][i];
		}
	}
}

int main(){
	int n,m;
	cout<<"Enter the number of rows : ";
	cin>>n;
	cout<<"Enter the number of columns : ";
	cin>>m;

	int arr[MAX][MAX];
	
	cout<<"Enter the elements of marix : ";
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cout<<"arr["<<i<<"]["<<j<<"]";
			cin>>arr[i][j];
		}
	}

	cout<<"Row major : ";rowmajor(n,m,arr);
	cout<<endl;
	cout<<"Column major : ";columnmajor(n,m,arr);

return 0;
}
