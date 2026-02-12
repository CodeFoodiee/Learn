#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    bool ascending = true , descending = true;
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] < arr[i+1]){
            descending = false;
        }
        else ascending = false;
    }
    return ascending || descending;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
    }

    if(isSorted(arr,n)){
        cout<<"Sorted";
    }
    else cout<<"Unsorted";

    return 0;
}