#include<bits/stdc++.h>

using namespace std;
void count(int n)
{
    vector <int> digits;
    int original_value=n;

    while(n>0)
    {
     int i = n%10;
     if(i!=0 && original_value%i==0)
     {
            digits.push_back(i);
        
     }
  
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



