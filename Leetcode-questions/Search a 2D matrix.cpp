class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int n=mat.size();
        int m=mat[0].size();

        int i=0;
        int j=n*m-1;

        int mid;

        while(i<=j){
            mid=(i+j)/2;

            if(mat[mid/m][mid%m]==target){
                return true;
            }
            else if(mat[mid/m][mid%m]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
};