//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
          int x=0,y=0,c;
        for (int i=1;i<=26;i++){
            c=0;
            for (int j=0;j<s.size();j++){
                if (s[j]==char(96+i)) c++;
            }
            if ((i%2==1) && (c%2==1)) y++;
            else if((i%2==0) && (c%2==0) && c>0) x++;
        }
        if ((x+y)%2==0) return "EVEN";
        else return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends