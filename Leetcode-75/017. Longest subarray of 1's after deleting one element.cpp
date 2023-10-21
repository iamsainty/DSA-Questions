class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n=nums.size();

        int i=0;
        int j=0;

        int len=0;
        int c=0;

        while(i<n){
            if(nums[i]==0){
                c++;
            }
            while(c>1){
                if(nums[j]==0){
                    c--;
                }
                j++;
            }
            len=max(len,i-j);
            i++;
        }
        return len;
    }
};