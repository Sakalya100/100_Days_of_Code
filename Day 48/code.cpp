class Solution {
public:
    int alternateDigitSum(int n) {
        int rev = 0;
        while(n>0){
            int d = n%10;
            rev = rev*10 + d;
            n = n/10;
        }
        int res = 0;
        int i = 0;
        while(rev>0){
            int d = rev%10;
            if(i%2==0){
                res += d;
            }
            else{
                res-= d;
            }
            rev = rev/10;
            i++;
        }
        return res;
    }
};
