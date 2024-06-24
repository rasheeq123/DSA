//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        //code here.
        /*
        int s=-1, e=-1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==key)
            {
                s=i;
                break;
            }
        }
        for(int j=n-1; j>=0; j--)
        {
            if(arr[j]==key)
            {
                e=j;
                break;
            }
        }
        return {s,e};
        */
        
        // through vector
        
        /*
         vector<int> result(2, -1);
         
         
        for(int i=0; i<n; i++)
        {
            if(arr[i]==key)
            {
                result[0]=i;
                break;
            }
        }
        for(int j=n-1; j>=0; j--)
        {
            if(arr[j]==key)
            {
               result[1]=j;
                break;
            }
        }
        return result;
        */
        
        //optimized approach
        
        vector<int> result(2, -1);
        int i=0;
        int j=n-1;
        while (i<=j)
        {
            if(result[0]==-1 && arr[i]==key)
            {
                result[0]=i;
            }
            
            
             if(result[1]==-1 && arr[j]==key)
            {
                result[1]=j;
            }
            
            
            if (result[0] != -1 && result[1] != -1) {
            break;
                
            }
            
            if (result[0] == -1)
            {
               i++;
            }
            if (result[1] == -1) {
                
            j--;
                
            }
        }
        return result;
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends