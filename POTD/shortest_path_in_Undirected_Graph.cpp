//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int> adj[N];
        for(int i=0;i<M;i++)
        {
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);
           
        }
        vector<int> dist(N,-1);
        vector<int> visited(N,0);
        
        queue<int> q;
        q.push(src);
        dist[src]=0;
        visited[src]=1;
        
        
        while(!q.empty())
        {
            int Node = q.front();
            q.pop();
            for(int j=0;j<adj[Node].size();j++)
            {
                if(visited[adj[Node][j]])
                continue;
                
                visited[adj[Node][j]]=1;
                q.push(adj[Node][j]);
                dist[adj[Node][j]]=dist[Node]+1;
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends