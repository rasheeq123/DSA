#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
     public:
        vector <int> rotate (int N, int D)
    {
    std::vector<int> list;
    D = D % 16;
    int l = (N << D | N >> (16 - D)) & 65535;
    int r = (N >> D | N << (16 - D)) & 65535;
    list.push_back(l);
    list.push_back(r);
    return list;
    };

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}