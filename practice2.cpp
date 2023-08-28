#include <iostream>
using namespace std;
class palindrome

{
    public:
    int pali(int a[], int n)
    {
        int i, j;
        string word;
        word= to_string(a[i]);
        i=0;
        j=word.length()-1;
        for(i=0; i<n; i++)
        {
            if(a[i]!=a[j])
            {
                i++;
                j--;
                return false;
            }
        }
        return true;

    }
};
int main()
{
    palindrome p;
    int a[122, 131, 151, 1234];
    int n= sizeof (a)/sizeof (a[0]);
    int result= p.pali(a,n);
     if (result) {
        cout << "All elements are palindromes." << endl;
    } else {
        cout << "Not all elements are palindromes." << endl;
    }
    
    return 0;

}
/*
#include <iostream>
using namespace std;

class Solution {
public:
    bool PalinArray(int a[], int n)
    {
        int i, j, k;
        string word;
        for (i = 0; i < n; i++)
        {
            word = to_string(a[i]);
            j = word.length() - 1;
            k = 0;
            while (k <= j)
            {
                if (word[k] != word[j])
                {
                    return false;
                }
                k++;
                j--;
            }
        }
        return true; // Return true here if all elements are palindromes
    }
};

int main() {
    Solution solution;
    
    int arr[] = {121, 1331, 1221, 1234321};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bool result = solution.PalinArray(arr, n);
    
    if (result) {
        cout << "All elements are palindromes." << endl;
    } else {
        cout << "Not all elements are palindromes." << endl;
    }
    
    return 0;
}
*/
