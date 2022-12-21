/*Approach*/
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return !(n&(n-1));
    }
};

int main(){
    Solution obj = Solution();
    int ans = obj.isPowerOfTwo(64);

    if(ans){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}

