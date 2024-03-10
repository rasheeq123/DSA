#include <iostream>
using namespace std;
class palindrome

{
    public:
    int pali(int a[], int n)
    {
        int i,j,k;
        string word=to_string(a[i]);
        j=0;
        k=word.length()-1;
        for(i=0; i<n; i++)
        {
            if(word[j]!=word[k])
            {
                return false;
            }
            j++;
            k--;
            }
            return true;
    }
};
int main()
{
    palindrome p;
    int a[]={121, 131, 151, 121};
    int n= sizeof (a)/sizeof (a[0]);
   bool result= p.pali(a,n);
     if (result) {
        cout << "All elements are palindromes." << endl;
    } else {
        cout << "Not all elements are palindromes." << endl;
    }
    
    return 0;

}