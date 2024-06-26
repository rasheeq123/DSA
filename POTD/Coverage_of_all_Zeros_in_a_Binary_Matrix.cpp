//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
         int row = matrix.size();
        int col = matrix[0].size();
        int cov = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0)
                {int up = i-1>=0?matrix[i-1][j]==1?1:0:0;
                int down = i+1<row?matrix[i+1][j]==1?1:0:0;
                int left = j-1>=0?matrix[i][j-1]==1?1:0:0;
                int right = j+1<col?matrix[i][j+1]==1?1:0:0;
                // cout<<i<<","<<j<<":"<<up<<":"<<down<<":"<<left<<":"<<right<<endl;
                cov+=up+left+down+right;}
            }
        }
        return cov;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends