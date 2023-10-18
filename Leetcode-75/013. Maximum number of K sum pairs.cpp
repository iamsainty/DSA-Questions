class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int i=0;
        int j=nums.size()-1;

        int sum;
        int c=0;

        while(i<j){
            sum=nums[i]+nums[j];

            if(sum==k){
                c++;
                i++;
                j--;
            }
            else if(sum<k){
                i++;
            }
            else{
                j--;
            }
        }
        return c;
    }
};