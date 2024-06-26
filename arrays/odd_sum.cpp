/*You are given an array 'A' of 'N' integers numbered from '0' to 'N - 1'.
Return the maximum number of elements you can select from the array 'A' such that the sum of all the selected elements is odd or return '-1' if you can not select elements such that the sum of them is odd.
*/
#include <bits/stdc++.h>
using namespace std;
int maximumElements(int n, vector<int> &v) {
    // Write your code here.
    int sum=0;
    int odd_count=0, even_count=0; 

    for(int i=0; i<n; i++)
    {
      sum=sum+v[i];
      if(v[i]%2==0)
      {
          even_count++;
      }
      else{
          odd_count++;
      }
    }
    if(sum%2!=0)
    {
        return n;
    }
    else
    {
        if(odd_count>0)
        {
            return n-1;
        }
        else{
            return -1;
        }
    }

}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout <<"number of elements:"<< maximumElements(n, v) << endl;
    return 0;

}