vector<int> Solution::plusOne(vector<int> &A) {
    
    vector<int>res;
    int n=A.size();
    
    int carry=0;
     int sum=A[n-1]+1+carry;
     res.push_back(sum%10);
     carry=sum/10;
    for(int i=n-2;i>=0;i--)
    {
       sum=A[i]+carry;
        if(sum>9)
        {
            n=sum%10;
            res.push_back(n);
            carry=sum/10;
            
        }
        else{
        carry=0;
        res.push_back(sum);
        }
        
    }
    if(carry)
    res.push_back(carry);
   int k=res.size()-1;
    while(true)
    {
        if(res[k]==0)
        res.pop_back();
        else
        break;
        
        k--;
        
    }
    
    
    reverse(res.begin(),res.end());
    
    
    return res;
}

