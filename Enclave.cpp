#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        // Mark all land cells connected to the boundary as visited.
        for (int i = 0; i < rows; ++i) {
            if (grid[i][0] == 1) {
                dfs(grid, i, 0);
            }
            if (grid[i][cols - 1] == 1) {
                dfs(grid, i, cols - 1);
            }
        }
        
        for (int j = 0; j < cols; ++j) {
            if (grid[0][j] == 1) {
                dfs(grid, 0, j);
            }
            if (grid[rows - 1][j] == 1) {
                dfs(grid, rows - 1, j);
            }
        }
        
        // Count the remaining land cells that are not connected to the boundary.
        int count = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == 1) {
                    count++;
                }
            }
        }
        
        return count;
    }
    
private:
    void dfs(vector<vector<int>>& grid, int row, int col) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        if (row < 0 || row >= rows || col < 0 || col >= cols || grid[row][col] == 0) {
            return;
        }
        
        grid[row][col] = 0; 
        
        
        dfs(grid, row + 1, col);
        dfs(grid, row - 1, col);
        dfs(grid, row, col + 1);
        dfs(grid, row, col - 1);
    }
    };


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code E