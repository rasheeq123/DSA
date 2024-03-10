#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int>v1={1,2,10};
    vector <int>v2={3,4,11};
    vector <int>v3={5,6,7,8,12};

   
    //3D
    vector<vector<vector<int>>> v_3(10, vector<vector<int>> (20, vector<int> (30,0)));
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
   
    for(auto point:v)
    {
        for(auto it:point)
        {
            cout<<it;
        }
    }
    cout<<"\n"<<v[2][4];
    cout<<"\n///////\n";
    
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
    }
    cout<<v_3.size();

    return 0;
}
