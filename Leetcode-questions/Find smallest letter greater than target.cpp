class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int n=letters.size();

        int i=0;
        int j=n-1;

        int mid;

        if(target>=letters[n-1]){
            return letters[0];
        }

        while(i<=j){
            mid = i+(j-i)/2;

            if(letters[mid]<=target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return letters[i%n];
    }
};