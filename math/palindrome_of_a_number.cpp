#include <iostream>
using namespace std;
bool palindrome(int n)
{
    // Write your code here
    int  reverse=0;
    int original=n;
    int last_digit;

    while(n>0)
		    {
		        last_digit=n%10;
		       reverse=(reverse*10)+ last_digit;
		       n=n/10;
		    }
		    return reverse == original;
            
}
int main()
{
    int n;
    cin>>n;
    cout<<palindrome(n);
    return 0;
}