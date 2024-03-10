#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> mpp;
    mpp.insert({"abc", 2});
    mpp.insert({"cde", 3});
    mpp.insert({"gfg", 4});
    mpp.insert({"fghj", 2});
    mpp.erase("abc");

    for(auto it=mpp.begin(); it!=mpp.end(); it++)
    {
        cout<<it->first<<"\t"<<it->second<<"\n";
    }
    // for(auto it: mpp)
    // {
    //     cout<<it.first<<"\t"<<it.second<<"\n"<< endl;
    // }
    



}

