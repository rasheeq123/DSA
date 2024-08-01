#include <bits/stdc++.h>
using namespace std;
int makeBeautiful(string str) {
	// Write your code here
	 int n = str.length();
    int changesPatternA = 0; // changes needed to match "010101..."
    int changesPatternB = 0; // changes needed to match "101010..."
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // Even index
            if (str[i] != '0') changesPatternA++;
            if (str[i] != '1') changesPatternB++;
        } else {
            // Odd index
            if (str[i] != '1') changesPatternA++;
            if (str[i] != '0') changesPatternB++;
        }
    }
    
    return min(changesPatternA, changesPatternB);
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        cin >> str;
        cout << makeBeautiful(str) << endl;
    }
    return 0;
}