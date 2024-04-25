#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int num, remainder, digit=0;
    cin>>num;
    int power=0, decimal=0;
    while(num>0)
    {
        remainder= num%10;
       digit= remainder* pow(8,power);
    decimal+=digit;
        num=num/10;
        power++;
    }
    
    cout<<decimal;
   
}