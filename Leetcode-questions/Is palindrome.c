bool isPalindrome(int x){
    int num = x;
    int long rev=0;
    int last=0;
    if(x<0){
        return false;
    }
    else{
    while(x!=0){
        last=x%10;
        rev=rev*10+last;
        x=x/10;
    }
    if(rev==num){
        return true;
    }
    else{
        return false;
    }
    }
}