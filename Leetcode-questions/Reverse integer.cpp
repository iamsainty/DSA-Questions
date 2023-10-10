class Solution {
public:
    int reverse(int x) {

        long long int rev=0;
        int digit;

        if(x>=INT_MAX||x<=INT_MIN){
            return 0;
        }

        if(x>=0){
            while(x){
                digit=x%10;
                if(rev*10+digit>=INT_MAX||rev*10+digit<=INT_MIN){
                    return 0;
                }
                rev=rev*10+digit;
                x=x/10;
            }
            return rev;
        }
        else{
            x=-x;
            while(x){
                digit=x%10;
                if(rev*10+digit>=INT_MAX||rev*10+digit<=INT_MIN){
                    return 0;
                }
                rev=rev*10+digit;
                x=x/10;
            }
            return -rev;
        }
        
    }
};