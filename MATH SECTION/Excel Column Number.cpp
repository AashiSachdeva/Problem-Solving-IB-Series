int Solution::titleToNumber(string A) {
    int n=A.length();
    int ans=0;
    long long int base=1;
    for(int i=n-1;i>=0;i--)
    {
        int val=A[i]-'A' +1;
        ans=ans+base*val;
        base=base*26;
    }
    return ans;
}

