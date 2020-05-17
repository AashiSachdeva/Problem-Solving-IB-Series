int Solution::hammingDistance(const vector<int> &A) {
    
   vector<int>barray(32,0);
   for(int i=0;i<A.size();i++)
   {
       int num=A[i];
       int index=0;
       while(num>0)
       {
           barray[index]+= (num & 1) ;
           index++;
           num=num>>1;
       }
   }
   int ans=0;
   for(int i=0;i<barray.size();i++)
   {
       ans= (ans +2*barray[i] * (A.size()-barray[i])) % 1000000007;
   }
    return ans;
}

