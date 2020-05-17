public class Solution {
    
        public int gcd(int a,int b)
    {
        if(b%a==0)return a;
        else return gcd(b%a,a);
    }
    public int cpFact(int a, int b) {
        while(gcd(a,b)!=1){
            a = a/gcd(a,b);
        }
        return a;
    }   
    
}

