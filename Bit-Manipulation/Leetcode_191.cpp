#include <iostream>
#include <bitset>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n > 0) {
            if (n & 1) {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main() {
    int input = 11; 
    Solution sol;
    int result = sol.hammingWeight(input);

    cout << "Input: " << input << " (binary: " << bitset<32>(input) << ")" << endl;
    cout << "Number of 1 bits (Hamming Weight): " << result << endl;

    return 0;
}
