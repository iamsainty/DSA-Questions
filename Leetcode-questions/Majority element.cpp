class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        map<int,int> count;

        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }

        vector<int> ans;

        for(auto it:count){
            if(it.second>(n/3)){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};