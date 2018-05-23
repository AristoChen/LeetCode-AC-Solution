class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t answer;
        bitset<32> temp = bitset<32>(n);
        int swap = 0;
        
        for(int i = 0; i < 16; i++)
        {
            swap = temp[i];
            temp[i] = temp[31-i];
            temp[31-i] = swap;
        }
        answer = temp.to_ulong();
        return answer;
    }
};