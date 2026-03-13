#include<iostream>
using namespace std;

#define MAX 100

void matrixprod(int m, int n, int c, int matrix1[][MAX],int matrix2[][MAX]){
	int matr[MAX][MAX]; 

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			matr[i][j] = 0;
			for(int k = 0 ; k < c ; k++){
			matr[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	cout<<"The product of the given matrix is :"<<" ";
	for(int i=0;i<m;i++){
		for(int j=0;j<c;j++){
			cout<<matr[i][j]<<" ";
		}
	cout<<endl;
	}
}

int main(){
	int n,m;
	cout<<"Enter the number of rows and columns of mat1 : ";
	cin>>m>>n;

	int matr1[MAX][MAX];

	cout<<"Enter the elements for mat1 : ";

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin>>matr1[i][j];
		}
	}
	
	int c;
	cout<<"Enter Column of mat2 : ";
	cin>>c;

	int matr2[MAX][MAX];

	cout<<"Enter the elements for mat2 : ";

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < c ; j++){
			cin>>matr2[i][j];
		}
	}


	cout<<"product : "<<endl;

	matrixprod(m,n,c,matr1,matr2);


	return 0;
}

