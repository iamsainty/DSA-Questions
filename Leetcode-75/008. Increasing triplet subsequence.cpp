class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();

        int i=INT_MAX;
        int j=INT_MAX;


        for(int k=0;k<n;k++){
            if(nums[k]>j){
                return true;
            }
            else if(nums[k]<=i){
                i=nums[k];
            }
            else{
                j=nums[k];
            }
        }
        
        return false;
    }
};
