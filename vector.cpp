#include<bits/stdc++.h>
using namespace std;
int main()
// simply entering the vector and printing it!
{
    vector <int> v;
    int n,x,i; //n=size;
    cout<<"enter size:";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
         v.push_back(x);
    }
   for(i=0; i<v.size(); i++)
   {
    cout<<v[i]<<" ";
   }
}