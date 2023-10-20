class Solution {
public:
    int maxVowels(string s, int k) {

        int v=0;
        int ans=0;

        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                v++;
            }
        }

        ans=v;

        for(int i=0;i<s.size()-k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                v--;
            }
            if(s[i+k]=='a'||s[i+k]=='e'||s[i+k]=='i'||s[i+k]=='o'||s[i+k]=='u'){
                v++;
            }
            ans=max(ans,v);
        }
        return ans;
    }
};