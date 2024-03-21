#include<iostream>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    int j;
    for(int i=0; i<n; i++)
    {
        for( j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for(j=0; j<i*2+1; j++)
        {
            cout<<"*";
        }
        for(j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;
}