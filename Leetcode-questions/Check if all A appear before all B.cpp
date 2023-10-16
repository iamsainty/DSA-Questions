class Solution {
public:
    bool checkString(string s) {
        int n=s.size();

        int c=0;

        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                c=1;
            }
            if(c==1&&s[i]=='a'){
                return false;
            }
        }

        return true;
    }
};