#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n, last_digit;
	int reverse=0;
	cin>>n;
	while(n>0)
	{
		last_digit= n%10;
		n=n/10;
		reverse= (reverse*10) + last_digit;
		
	}

	cout<<reverse;
    return 0;
	
}
