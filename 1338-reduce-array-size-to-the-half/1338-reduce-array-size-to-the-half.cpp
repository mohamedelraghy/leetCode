class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> occr;
        for(int i = 0; i < arr.size(); i++) occr[arr[i]]++;
        
        vector<int> vec;
        
        for(auto i: occr) vec.push_back(i.second);
        
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        
        int sum = 0, count = 0;
        
        for(auto i : vec){
            sum += i;
            count++;
            if(sum >= arr.size() / 2) break; 
        }   
        
        return count;
    }
};