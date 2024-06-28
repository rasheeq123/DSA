
#include <iostream>
using namespace std;

int main() {
    int n;
    long long result=1;
    cin >> n;

    if (n < 0) {
        cout << "Error" << endl;
    } else if (n == 0) {
        cout << 1 << endl;
    } else {
        int i = n;
        
        while (i > 0) {
            result = result* i;
            i--;
        }
        cout << result << endl;
    }

    return 0;
}
