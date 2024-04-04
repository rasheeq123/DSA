#include<bits/stdc++.h>

using namespace std;
void count(int n)
{
    vector <int> digits;
    while(n>0)
    {
     int i = n%10;
    digits.push_back(i);
    n=n/10;   
    }
    
cout<<digits.size();

}

int main()
{
    
   int num;
   cin>>num;
    count(num);
    return 0;
}



