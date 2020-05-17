bool isPowerTwo(int A, int n)
{
    int curr=n*n;
    for(int j=2;curr<=A;j++)
    {
        if(curr==A)
        {
            return true;
        }
        curr=curr*n;

    }
    return false;
}
int Solution::isPower(int A) {
    if(A==1) return 1;
    if(A==0) return 0;
    int maxBase=sqrt(A);
    for(int i=2;i<=maxBase;i++)
    {
        if(isPowerTwo(A,i))
           return 1;
    }
    return 0;
    
    
}

