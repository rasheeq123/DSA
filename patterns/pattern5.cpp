#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
}

int main()
{
    
    pattern(4);
    return 0;
}


