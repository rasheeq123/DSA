#include<iostream>
using namespace std;
void pattern(int n)
{
    int j;
    for(int i=0; i<n; i++)
    {
        for( j=0; j<i; j++)
        {
            cout<<" ";
        }
        for(j=0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        }

        for( j=0; j<i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
        
        pattern(4);
        return 0;
}
