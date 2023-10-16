class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.size();

        int i=0;
        int j=0;
        int k=0;

        while(k<n){
            while(s[i]==' '&&i<n){
                i++;
                k++;
            }
            j=i;
            while(s[j]!=' '&&j<n){
                j++;
                k++;
            }
            reverse(s.begin()+i,s.begin()+j);
            i=j;
        }

        reverse(s.begin(),s.end());

        int ans=0;
        for(i=0;i<n;i++){
            if(s[i]!=' '||(i>0&&s[i-1]!=' ')){
                s[ans]=s[i];
                ans++;
            }
        }

        while(s[ans-1]==' '){
            ans--;
        }

        return s.substr(0,ans);

    }
};
