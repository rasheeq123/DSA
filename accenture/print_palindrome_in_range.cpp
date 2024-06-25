#include<bits/stdc++.h>
using namespace std;
void print_palindrome(int n, int m)
{
    int num, rem, div;
    for( num=n; num<=m; num++)
    {
        int temp=num;
        rem=0;
        while(temp>0)
        {
        rem=rem*10+temp%10;
        temp=temp/10;
        }
        if(num==rem)
    {
        cout<<num<<" ";

    }
    
    
}
int main()
{
    int n,m;
    cin>>n>>m;

    print_palindrome(n,m);
    return 0;
}