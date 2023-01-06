class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int maximum = 0;
        int sum = 0;
        for(int i=0; i< costs.size(); i++){
            if(costs[i] + sum > coins){
                break;
            }
            else{
                sum = costs[i] + sum ;
                maximum ++;
            }
        }
        return maximum;
        
    }
};
