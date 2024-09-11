class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff = start ^ goal;

        int bits = 0;
        while(diff) {
            bits += diff & 1;
            diff >>= 1;
        }

        return bits;
    }
};