//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
void fillVec(string s, int n, int cnt, int len, vector<string> &vec){
        if(cnt <= len - cnt){
            if(len == n){
                vec.push_back(s);
                return;
            }
            
            fillVec(s+"1", n, cnt, len + 1, vec);
            fillVec(s+"0", n, cnt + 1, len + 1, vec);
        }
    }

	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> vec;
	    fillVec("1", n, 0, 1, vec);
	    
	    return vec;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends