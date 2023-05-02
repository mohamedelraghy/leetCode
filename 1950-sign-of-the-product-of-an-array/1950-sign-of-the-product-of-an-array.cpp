class Solution {
public:
    int arraySign(vector<int>& nums) {
        int countNegative = 0;

        for(auto num : nums) {
          if(!num) return 0;
          else if( num < 0) countNegative++;
        }

        if(countNegative & 1) return -1;
        else return 1;
    }
};