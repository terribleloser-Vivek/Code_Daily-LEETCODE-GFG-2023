class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t out=0;
        int c=32;
        while(c--){
            out=out<<1;
            out+=(n&1);
            n=n>>1;
        }
        return out;
    }
};