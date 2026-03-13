#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int digit;
    int sum = 0;
    int sum2 = 0;
    while(sum <= 10){
        digit = n%10;
        sum += digit;
        n /= 10;
    }

    cout<<sum2;
    return 0;
}