class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0); 
        
        long sum = 0;
        for(auto i: chalk) sum += i;

        int rem = k % sum;
        cout << rem << endl;
        if(!rem) return 0;
        cout << "what" << endl;
        for(int i = 0; i < chalk.size(); i++) {
            if(chalk[i] > rem) return i;
            rem -= chalk[i];
        }
        return 0;
    }
};