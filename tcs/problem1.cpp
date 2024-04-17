/*A party has been organised on a cruise. The party is organised for a limited  time(T). The number of 
guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The 
task is to find the maximum number of guests present on the cruise at any given instance within T hours. */

#include<iostream>
using namespace std;
int main()
{
    int n;
    int max=0, sum=0;
    cin>>n;
    int a[n], b[n];
    cout<<"Enter the number of guests entering the party at every hour: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number of guests leaving the party at every hour: ";
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    //  max = sum; 
    for(int i=0; i<n; i++)
    {
        sum= sum+a[i]-b[i];
        if(max<sum)
        max=sum;
    }
    cout<<"maximum number of guest:"<<max;
    return 0;
}