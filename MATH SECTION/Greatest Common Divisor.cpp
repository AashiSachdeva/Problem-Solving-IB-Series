int Solution::gcd(int a, int b) {
    
       if(b%a==0)return a;
        else return gcd(b%a,a);
}

