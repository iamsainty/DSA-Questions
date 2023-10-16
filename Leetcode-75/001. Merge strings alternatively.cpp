class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n=word1.size();
        int m=word2.size();

        string ans;

        int i=min(n,m);
        int j=0;

        while(j<i){
            ans.push_back(word1[j]);
            ans.push_back(word2[j]);
            j++;
        }

        if(n>j){
            while(j<n){
                ans.push_back(word1[j]);
                j++;
            }
        }
        else{
            while(j<m){
                ans.push_back(word2[j]);
                j++;
            }
        }
        return ans;
    }
};
