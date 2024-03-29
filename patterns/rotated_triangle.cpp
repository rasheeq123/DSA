#include<iostream>
using namespace std;
void pattern10(int n)
{
   int i, j, stars;
   for(i=1; i<=2*n-1; i++)
   {
    stars=i;
    if(i>n)
    {
        stars=2*n-i;
    }
    for(j=1; j<=stars; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
   }
}
int main()
{
    pattern10(4);
    return 0;
}