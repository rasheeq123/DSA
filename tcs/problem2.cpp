/*Given an array Arr[] of size T, contains binary digits. 
Where 
0 represents a biker running to the north. 
1 represents a biker running to the south. 
 
The task is to count crossing bikers in such a way that each pair of crossing bikers (N, S), where 0<=N<S<T, 
is passing when N is running to the north and S is running to the south.*/

#include<iostream>
using namespace std;
int main()
{
    int n, count=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            for(int k=i+1; k<n; k++)
            {
                if(a[k]==1)
                {
                    count++;
                }
            }
        }
    }
    cout<<"Number of crossing bikers: "<<count;
    return 0;
}