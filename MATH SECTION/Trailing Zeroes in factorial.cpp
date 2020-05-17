int Solution::trailingZeroes(int A) {
    
    int base=5;
    int ans=0;
    while(A)
    {
        ans=ans+(A/5);
        A=A/5;
        
    }
    return ans;
}

