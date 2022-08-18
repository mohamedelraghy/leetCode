class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int, int> occr;
        for(int i = 0; i < arr.size(); i++) occr[arr[i]]++;
        
        vector<pair<int, int>> vec;
        
        for(auto i: occr) vec.push_back(i);
        
        sort(vec.begin(), vec.end(), [](const auto &x, const auto &y) {return x.second > y.second;});
        
        int sum = 0, count = 0;
        
        for(auto i : vec){
            sum += i.second;
            count++;
            if(sum >= arr.size() / 2) break; 
        }   
        
        return count;
    }
};