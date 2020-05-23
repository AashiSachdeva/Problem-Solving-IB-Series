int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int i=0;
    int t=0;
    for(i=1;i<n;i++)
    {
        int X=abs(A[i]-A[i-1]);
        int Y=abs(B[i]-B[i-1]);
     
        t= t +  max(X,Y);
        
        
    }
    return t;
    
}

