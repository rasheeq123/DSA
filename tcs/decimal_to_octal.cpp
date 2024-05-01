#include<iostream>
#include<string>
using namespace std;
string octal(int num)
{
    int rem;
    string octal;
    if(num==0)
    {
        octal="0";
    }
    while(num>0)
    {
        rem=num%8;
        octal=to_string(rem)+ octal;
        num=num/8;
    }
    return octal;

}
int main()
{
    int num;
    cin>>num;
    cout<<octal(num);
    return 0;
}