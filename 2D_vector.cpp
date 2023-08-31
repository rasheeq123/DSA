#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int>v1={1,2};
    vector <int>v2={3,4};
    vector <int>v3={5,6,7,8};
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
   
    for(auto point:v)  // 
    {
        for(auto it:point)
        {
            cout<<it;
        }
    }
    

    return 0;
}