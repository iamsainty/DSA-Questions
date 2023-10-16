class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int p, q;

        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                if((nums[i]+nums[j]==target)&&(i!=j)){
                    p=i;
                    q=j;
                }
            }
        }
        return {p, q};
    }
};