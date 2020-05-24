  vector<int> b(A.size()+1,0);
    for(int i=0;i<A.size();i++){
        b[A[i]]++;
    }
    int a,c;
    for(int i=0;i<A.size()+1;i++){
        if(b[i]==2){
            a=i;
        }
        if(b[i]==0){
            c=i;
        }
    }
    vector<int> C;
    C.push_back(a);
    C.push_back(c);
    return C;
