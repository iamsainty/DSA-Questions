class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans1;
        vector<int> ans2;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0;
        int j=0;

        int n=nums1.size();
        int m=nums2.size();

        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
                if(i==0||nums1[i-1]!=nums1[i]){
                    ans1.push_back(nums1[i]);
                }
                i++;
            }
            else if(nums1[i]==nums2[j]){
                i++;
                j++;
            }
            else{
                if(j==0||nums2[j-1]!=nums2[j]){
                    ans2.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i<n){
            if(i==0||nums1[i-1]!=nums1[i]){
                    ans1.push_back(nums1[i]);
                }
            i++;
        }
        while(j<m){
            if(j==0||nums2[j-1]!=nums2[j]){
                    ans2.push_back(nums2[j]);
                }
            j++;
        }
        return {ans1, ans2};
    }
};