#include <iostream>
#include <bitset>
#include <cstdint>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;

        for (int i = 0; i < 32; ++i) {
            int lastBit = n & 1;
            result = (result << 1) | lastBit;
            n = n >> 1;
        }

        return result;
    }
};

int main() {
    uint32_t input = 43261596; 
    Solution sol;
    uint32_t output = sol.reverseBits(input);

    cout << "Original: " << input << " (binary: " << bitset<32>(input) << ")" << endl;
    cout << "Reversed: " << output << " (binary: " << bitset<32>(output) << ")" << endl;

    return 0;
}
