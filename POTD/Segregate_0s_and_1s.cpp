//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
            int l=0,r=arr.size()-1;

        while(l<r)

        {

            if(arr[l]==1&&arr[r]==0)

            {

                swap(arr[l],arr[r]);

                l++;r--;

            }

            else if(arr[l]==1&&arr[r]==1)

            {

                r--;

            }

            else if(arr[l]==0&&arr[r]==0)

            {

                l++;

            }

            else{

                l++;r--;

            }

        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends