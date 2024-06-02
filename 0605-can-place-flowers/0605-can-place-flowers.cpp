class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int size = flowerbed.size();
        for(int i = 0; i < size; i++) {
            if(!flowerbed[i]) {
                bool emptyLeftPlot = (i == 0) || (!flowerbed[i - 1]);
                bool emptyRightPlot = (i == size - 1) || (!flowerbed[i + 1]);
                
                if(emptyLeftPlot && emptyRightPlot) {
                    flowerbed[i] = 1;
                    n--;
                    if(n <= 0) return true;
                }
            }
        }
        
        return n <= 0;
    }
};