#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character or number between 0-9:";
    cin>>ch;
  
   if(ch>=65 && ch<=90)
    {
        cout<<"Uppercase ";
    }
    else if (ch>=97 && ch<=122)
    {
        cout<<"lowercase";
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"numeric";
    }
    else{
        cout<<"Eroor! Enter the input according to the given statement";
    }
    return 0;
}