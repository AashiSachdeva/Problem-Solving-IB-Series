int Solution::isPalindrome(int A) {
    if(A<0)  return 0;
    string num= to_string(A);
    int n=num.length();
    int i=0;
    while(i<(n-i-1)){
    if(num[i]!=num[n-i-1])
        return 0;
    i++;
    }
    
    
    return true;
}

