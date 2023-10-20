class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;

        int len=0;

        while(j<nums.size()){
            if(nums[j]==1){
                j++;
                len=max(len,j-i);
            }
            else{
                j++;
                i=j;
            }
        }
        return len;
    }
};