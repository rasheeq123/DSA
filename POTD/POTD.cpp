#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
string removeDuplicates(string str) {
string ans="";

     unordered_map<char,int>mp;

     for(int i: str)

        mp[i]++;

     for(int i=str.size();i>=0;i--)

     {

         if(mp[str[i]]>1)

         {

             mp[str[i]]--;

         }

         else

         ans+=str[i];

     }

     reverse(ans.begin(),ans.end());
      return ans;
}
    

};


    

     int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}