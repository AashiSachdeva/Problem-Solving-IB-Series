string Solution::convertToTitle(int A) {
    
    string val="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans;
    while(A>0)
    {
        A=A-1;
        int rem=A%26;
        ans=val[rem]+ans;
        A=A/26;
    }
    return ans;
}

