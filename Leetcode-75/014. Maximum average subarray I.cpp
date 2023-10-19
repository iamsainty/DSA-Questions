class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double avg;
        double sum=0;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        avg=sum;

        for(int i=1;i<nums.size()-k+1;i++){
            sum-=nums[i-1];
            sum+=nums[i+k-1];
            avg=max(avg,sum);
        }

        return avg/k;
    }
};