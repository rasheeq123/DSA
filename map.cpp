#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> mpp;
    mpp.insert({"abc", 2});
    mpp.insert({"cde", 3});
    mpp.insert({"gfg", 4});
    mpp.insert({"cde", 2});
    for(auto it: mpp)
    {
        cout<<it.first<<"\t"<<it.second<<"\n"<< endl;
    }


}

