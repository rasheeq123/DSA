//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
         vector<string>st;
        
        for(int i = 1 ; i <= n ; i++){
            
            st.push_back(to_string(i));
        }
        
        int cnt = 0;
        
        for(int i = 0 ; i < st.size() ; i++){

            
            for(int j = 0; j < st[i].size() ; j++){
                
                if(st[i][j] == '4'){
                    cnt++;
                    break;
                }
            }
            
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends