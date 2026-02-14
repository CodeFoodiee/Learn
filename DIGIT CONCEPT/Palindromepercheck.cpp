#include<iostream>
using namespace std;

int palindrome(int n){
	int oddcount = 0;
	int digit;
	vector<int> freq(10,0);
	while(n != 0){
		digit = n % 10;
		freq[digit]++;
		n /= 10;
	}
	
	for(int i = 0 ; i < freq.size() ; i++){
		if(freq[i] % 2 != 0){
			oddcount++;
		}
	}
return oddcount <= 1;
}

int main(){
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	
	if(palindrome(n)){
		cout<<"Palindrome permutation possible";
	}
	else{
		cout<<"Palindrome permutation not possible";
	}
	
return 0;
}
