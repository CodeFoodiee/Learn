#include<iostream>
#include<vector>
using namespace std;

int missing(vector<int> arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i+1] != arr[i]+1){
            return arr[i]+1;
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

    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    cout<<"Missing number : " << missing(arr);

    return 0;
}