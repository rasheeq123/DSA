#include<bits/stdc++.h>
using namespace std;
int main()
{
  pair<int, int> p[3] ;
  p[0]={0,1};
  p[1]={2,3};
  p[2]={4,5};
  swap(p[0], p[1]);
  for(int i=0; i<3; i++)
  {
  cout<<p[i].first<<p[i].second<<" ";
  } 
}