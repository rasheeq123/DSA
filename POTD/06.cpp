//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
           if(str[0] == '.' or str[str.size()-1] == '.') return 0;
        int dotCount=0; 
        string temp = "";
        
        for(int i=0; i<str.size(); i++){
            if(str[i] == '.' and str[i+1] == '.') return 0;
            if(str[i] == '.'){
                dotCount++;
                int num =  stoi(temp);
                if(temp[0] == '0' and num != 0) return 0;
                if(num < 0 || num > 255) return 0;
                temp = "";
            }
            if(dotCount > 3) return 0;
            
            if(str[i] >= '0' and str[i] <= '9'){
                temp += str[i];
            }
        }
        
        int num =  stoi(temp);
        if(temp[0] == '0' and num != 0) return 0;
        if(num < 0 || num > 255) return 0;
        
        if(dotCount != 3) return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends