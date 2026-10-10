class Solution {
public:
long int exponentiation(long int base,long int exp,int N)
{
    if(exp==0)
    return 1;
    if (exp==1)
    return base % N;

    long int t=exponentiation(base,exp/2,N);
    t=(t*t)%N;

    if(exp%2==0)
    return t;
    else
    return ((base%N)*t)%N;
}
    int countGoodNumbers(long long n) {
       long v=5;
       long z=pow(10,9)+7;
       if(n%2==1)
       v=exponentiation(4,n/2,z)*exponentiation(5,n/2+1,z);
       else
       v=exponentiation(4,n/2,z)*exponentiation(5,n/2,z);
       return v%z;
    }
};