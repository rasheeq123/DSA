class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem, sum=0;
        int prod=1;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            prod=prod*rem;
            n=n/10;
        }
        return prod-sum;
    }
};