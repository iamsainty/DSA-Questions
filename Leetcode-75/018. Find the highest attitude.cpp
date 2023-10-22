class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int height=0;
        int maxheight=0;

        for(int i=0;i<gain.size();i++){
            height+=gain[i];
            maxheight=max(height,maxheight);
        }
        return maxheight;
    }
};