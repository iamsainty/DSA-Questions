class Solution {
public:
    int searchInsert(vector<int>& arr, int m) {
        int n=arr.size();
	    int mid;

	    int i=0;
	    int j=n-1;

        while(i<=j){
            mid=(i+j)/2;

            if(arr[mid]==m){
                return mid;
            }
            else if(arr[mid]>m){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return i;
    }
};