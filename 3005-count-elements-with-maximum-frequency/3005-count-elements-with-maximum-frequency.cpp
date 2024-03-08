class Solution {
public:
    
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> ferq;
        
        for(int i = 0; i < nums.size(); i++){
            ferq[nums[i]]++;
        }
        
        
        int maxFreq = 0;
        for(auto i: ferq) {
            maxFreq = max(maxFreq, i.second);
        } 
        
        int ans = 0;
        for(auto i: ferq) {
            if(i.second == maxFreq) ans += i.second;
        }
        
        
        return ans;
        
    }
};