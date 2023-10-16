class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int m=0;
        
        for(int i=0;i<n; ){
            char current=chars[i];
            int count=0;
            
            while(i<n&&chars[i]==current) {
                i++;
                count++;
            }
            
            chars[m++]=current;
            
            if (count > 1) {
                string countStr = to_string(count);
                for (char c:countStr) {
                    chars[m++]=c;
                }
            }
        }
        
        return m;
    }
};
