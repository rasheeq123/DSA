#include <iostream>
using namespace std;

void print(int n) {
    if (n > 1) {
         cout << n - 1 << " ";
        print(n - 1);
    }
}

int main() {
    int n = 6;
    
    if (n > 1) {
        
        print(n);
        
    }
    
    return 0;
}
