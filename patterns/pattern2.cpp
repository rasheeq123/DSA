#include<iostream>
using namespace std;
void pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
}

int main()
{
   int n;
   cin>>n; 
    pattern(n);
    return 0;
}

// without function
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }
