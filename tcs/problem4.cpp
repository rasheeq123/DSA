#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string num) {
   int decimalValue = 0;
   
   int power=0;
   for(int i=num.length()-1; i>=0; --i)
   {
    if(num[i]=='1')
    {
        decimalValue+= pow(2, power)    ;

    }
    power++;
   }
   return decimalValue;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimalValue = binaryToDecimal(binary);
    
    cout << "Decimal value: " << decimalValue << endl;
    
    return 0;
}
