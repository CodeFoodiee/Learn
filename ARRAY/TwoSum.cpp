#include<iostream>
#include<vector>
using namespace std;

void TwoSum(vector<int> arr,int target){
    int n = arr.size();
    bool flag = false;

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] + arr[j]== target){
                cout<<"{ "<<i<<" , "<<j<<" }"<<endl;
                flag = true;
            }
        }
    }
    if(!flag){
        cout<<"No matches !"<<endl;
    }
}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the elements in the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : "<<endl;
    arr.resize(n);
    
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    
    int target;
    cout<<"Enter the target element : ";
    cin>>target;

    TwoSum(arr,target);
    return 0;
}