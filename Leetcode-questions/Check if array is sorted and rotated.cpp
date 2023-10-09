class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();

        int c=0;

        for(int i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1]){
                continue;
            }
            else{
                c++;
            }
        }

        if(c==0){
            return true;
        }

        if(c==1){
            if(nums[0]>=nums[n-1]){
                return true;
            }
            return false;
        }
        return false;
    }
    };