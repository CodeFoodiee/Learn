#include<iostream>
#include<vector>
using namespace std;

class Bound{
public:
    int lowerbound(vector<int> v , int x){
        int n = v.size();
        int low = 0 , high = n-1;
        int result = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(v[mid] >= x){
                result = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return result;
    }
    
    int upperbound(vector<int> v , int x){
        int n = v.size();
        int low = 0 , high = n-1;
        int result = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(v[mid] > x){
                result = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return result;
    }
};

int main(){
     vector<int> v;
    int x;
    int n;
    cin>>n;
    v.resize(n);

    for(int i = 0 ; i < v.size() ; i++){
        cin>>v[i];
    }
    
    cin>>x;

    Bound b1;
    int lowerB = b1.lowerbound(v,x);
    int upperB = b1.upperbound(v,x);

    cout<<"Lower bound : "<<lowerB<<endl<<"Upper bound : "<<upperB<<endl;
    return 0;
}