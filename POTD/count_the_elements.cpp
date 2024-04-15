//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
        // Your code goes here;
           int maxi=max(*max_element(a.begin(),a.end()),*max_element(b.begin(),b.end()));
       
       //count frequency of the element of array b
       vector<int>count(maxi+1,0);
       for(int i=0;i<b.size();i++){
            count[b[i]]++;
       }
       //calculate cumulative sum
       for(int i=1;i<=maxi;i++){
           count[i]=count[i]+count[i-1];
       }
      //  push count[a[query[i]]] in  ans
       vector<int>ans;
       for(int i=0;i<q;i++){
           ans.push_back(count[a[query[i]]]);
       }
       return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> a, b, ans;
        int input;
        for (int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for (int i = 0; i < n; i++) {
            cin >> input;
            b.push_back(input);
        }
        int q;
        cin >> q;
        vector<int> query;
        for (int i = 0; i < q; i++) {
            cin >> input;
            query.push_back(input);
        }
        Solution obj;
        ans = obj.countElements(a, b, n, query, q);
        for (int i = 0; i < q; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
// } Driver Code Ends