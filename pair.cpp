#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;
    // p=make_pair(2, "abc");
    p={2, "abc"};
    // pair<int, string> p1=p; ye 2 hi print krega
    pair<int, string> &p1=p; // ye 3 print krega bcoz & ka use ho rha i.e original value
    p1.first=3; 
    cout<<p.first<<" "<<p.second;

}