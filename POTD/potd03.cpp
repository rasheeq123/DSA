#include <bits/stdc++.h>
using namespace std;
class solution{
public:
int numberOfConsecutiveOnes(int n) {
 long long a=1,b=1;
        long long mod=1e9+7;
        for(int i=1;i<n;i++){
            long long c=a;
            a=(a+b)%mod;
            b=c;
        }
        long long total=1;
        long long p=2;
        while(n){
            if(n&1) total=(total*p)%mod;
            p=(p*p)%mod;
            n>>=1;
        }
        return (total-(a+b)%mod+mod)%mod ;
}
};
int main(){
    int n;
    cin>>n;
    solution ob;
    cout<<ob.numberOfConsecutiveOnes(n)<<endl;
    return 0;
}


