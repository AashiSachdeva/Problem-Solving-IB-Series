#define mod 1000003
int factorial(int n)
{
    if(n<=1) return 1;
    return ( n* factorial(n-1)) % mod;
}
int Solution::findRank(string A) {
    int ans=0;
    for(int i=0;i<A.length();i++)
    {
        int count=0;
        for(int j=i+1;j<A.length();j++)
        {
            if(A[j]<A[i])
              count++;
        }
        ans = (ans + count * (factorial(A.size()-i-1))%mod)%mod;
    }
    return ans+1;
}

