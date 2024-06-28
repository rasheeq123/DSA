//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool rowpalindrome(int row,vector<vector<int>>&arr,int n){
        for(int i=0;i<n;i++){
            if(arr[row][i]!=arr[row][n-i-1]) return 0;
        }
        return 1;
    }
    bool colpalindrome(int col,vector<vector<int>>&arr,int n){
        for(int i=0;i<n;i++){
            if(arr[i][col]!=arr[n-i-1][col]) return 0;
        }
        return 1;
    }
    string pattern(vector<vector<int>> &arr) {
        int n=arr.size();
        int m=arr[0].size();
        for(int i=0;i<n;i++){
            if(rowpalindrome(i,arr,m)) return to_string(i)+" R";
        }
        for(int i=0;i<m;i++){
            if(colpalindrome(i,arr,n)) return to_string(i)+" C";
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends