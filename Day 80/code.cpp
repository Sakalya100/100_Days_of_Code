class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count_pos = 0, count_neg = 0;
        for(auto it: nums){
            if(it<0){
                count_neg ++;
            }
            else if(it == 0){
                return 0;
            }
        }
        if(count_neg % 2 == 0){
            return 1;
        }
        else{
            return -1;
        }
    }
};
