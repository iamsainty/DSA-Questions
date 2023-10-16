class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
        int n=candies.size();

        int max=*max_element(candies.begin(), candies.end());

        vector<bool> result(n,0);

        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=max){
                result[i]=1;
            }
        }

        return result;
    }
};
