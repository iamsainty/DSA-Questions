class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();

        int k=gcd(n,m);

        for(int i=0;i<n;i=i+k){
            if(str1.substr(i,k)!=str2.substr(0,k)){
                return "";
            }

        }
        for(int i=0;i<m;i=i+k){
            if(str2.substr(i,k)!=str2.substr(0,k)){
                return "";
            }

        }

        

        return str2.substr(0,k);
    }
};
