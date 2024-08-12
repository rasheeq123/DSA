//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
         if(arr1.size() > arr2.size()) return SumofMiddleElements(arr2, arr1);
        int left = (arr1.size() + arr2.size())/2;
        
        
        int ans = -1;
        
        int low = 0;
        int n1 = arr1.size();
        int n2 = arr2.size();
        int high = min(left, n1);
        
        while(low <= high){
            int mid = (low + high)/2;
            
            int l1 = (mid-1 >= 0)?arr1[mid-1]:-1e9;
            int l2 = (left-mid-1 >= 0)?arr2[left-mid-1]:-1e9;
            int r1 = (mid < n1)?arr1[mid]:1e9;
            int r2 = (left-mid-1+1 < n2)?arr2[left-mid-1+1]:1e9;
            
            if(l1 <= r2 && l2 <= r1){
                return max(l1, l2) + min(r1, r2);
            }
            else if(l1 >r2){
                //include from 2nd 
                //decrease from 1
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
            
        }
       
        return ans;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends