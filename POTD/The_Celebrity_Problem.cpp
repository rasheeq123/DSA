//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // code here
        int n = mat.size();  // Get the number of people at the party

    // Iterate through each person to check if they can be a celebrity
    for (int i = 0; i < n; i++) {
        bool isCelebrity = true;  // Assume the current person (i) is a celebrity

        // Check if the current person (i) satisfies the celebrity criteria
        for (int j = 0; j < n; j++) {
            if (i == j) continue;  // Skip the comparison for the same person

            // If any person (j) does not know person (i) or if person (i) knows any person (j)
            // Then person (i) cannot be a celebrity
            if (mat[j][i] != 1 || mat[i][j] != 0) {
                isCelebrity = false;  // Mark that current person (i) is not a celebrity
                break;  // No need to check further for the current person (i)
            }
        }

        // If the current person (i) is verified as a celebrity, return their index
        if (isCelebrity) {
            return i;
        }
    }

    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends