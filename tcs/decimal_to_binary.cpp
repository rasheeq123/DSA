#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num, remainder;
    cin>>num;
    int power = 0;
   string  binary;
    if(num==0)
    {
        return 0;
    }
    while(num>0)
    {
        remainder= num%2;
        binary= to_string(remainder) + binary;
        num=num/2;

    }
    cout<<binary;

}