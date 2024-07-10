//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int x=arr.size(),min=INT_MAX,max=INT_MIN;
        map<int,vector<int>> m;
        sort(arr.begin(),arr.end());
        for(int i=0;i<x-2;i++){
            int left=i+1,right=x-1;
            while(left<right){
                int sum=arr[i]+arr[left]+arr[right];
                if(sum==target) return target;
                else if(sum>target) right--;
                else left++;
                if(abs(sum-target)<=min) {min=abs(sum-target);m[min].push_back(sum);}
            }
            
        }
        for(auto i:m[min]){
            if(i>max) max=i;
        }
        return max;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends