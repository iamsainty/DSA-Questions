class Solution {
public:
    int mySqrt(int n) {
        
        int i=0;
        int j=n;

        long long mid;
        int ans=0;

        while(i<=j){
            mid=(i+j)/2;

            if(mid*mid>n){
                j=mid-1;
            }
            else{
                ans=mid;
                i=mid+1;
            }
        }

        return ans;
    }
};