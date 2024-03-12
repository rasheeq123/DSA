#include <bits/stdc++.h>
using namespace std;
	
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	     map<int,int> mp;
	    vector<pair<int,int>> vect;
	    
	    for(int i = 0 ; i < n; i++){
	        for(int j = 0 ; j < n ; j++){
	            mp[mat2[i][j]]++;
	        }
	    }
	    
	    for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j  < n; j++){
                int currentValue = mat1[i][j];
                int requiredValue = x-currentValue;
            
                if(mp.find(requiredValue) != mp.end()){
                    //the element is present
                    int first = currentValue;
                    int second = requiredValue;
                
                    vect.push_back(make_pair(first,second));
                
                    mp[requiredValue]--;
                }
            }
        }
        
        return vect.size();
	}
};

int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}