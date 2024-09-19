//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
            vector<string> v;
        string temp="";
        string ans="";
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='.'){
                v.push_back(temp);
                temp="";
            }
            else{
                temp+=str[i];
            }
        }
        v.push_back(temp);
        for(int i=v.size()-1;i>=1;i--)
        {
            ans+=v[i]+'.';
        }
        ans+=v[0];
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends