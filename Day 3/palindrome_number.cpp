class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            long long int rev=0;
            int temp=x;
            while(x>0){
                int d = x%10;
                rev = rev*10 + d;
                x = x/10;
            }

            if(temp==rev){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
