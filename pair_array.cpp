#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={0,1,2};
    int b[]={3,4,5};
    pair<int, int> p[3];
    p[0]={0,3};
    p[1]={1,4};
    p[2]={2,5};
    for(int i=0; i<3; i++)
    {
    cout<<p[i].first<<"\n"<<p[i].second;
    }


}