

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
        void printArr(int n, int arr[]) {
        
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void setToZero(int n, int arr[]) {
        
        memset(arr,0,n*sizeof(arr[0]));
    }

    void xor1ToN(int n, int arr[]) {
        
        for(int i=0;i<n;i++){
            arr[i]=arr[i]^i;
        }
    }

};

int main() {
    int t;
    
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.xor1ToN(n, arr);
        obj.printArr(n, arr);
        obj.setToZero(n, arr);
        obj.printArr(n, arr);
    }
    return 0;
}

// Time Complexity: O(n)