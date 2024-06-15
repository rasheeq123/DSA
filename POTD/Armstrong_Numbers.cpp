
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
         int sum=0;
        int number=n;
        int t=number%10;
        sum+=t*t*t;
        number=number/10;
        t=number%10;
        sum+=t*t*t;
        number=number/10;
        sum+=number*number*number;
        if(n==sum) return "true";
        return "false";
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

