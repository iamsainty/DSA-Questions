int maxDepth(char * s){
    int c=0;
    int ans=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('){
            c++;
        }
        else if(s[i]==')'){
            c--;
        }
        if(c>ans){
            ans=c;
        }
    }

    return ans;
}