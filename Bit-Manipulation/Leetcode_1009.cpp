#include <iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        int notoperation = (~n);
        int mask = 0;

        if (n == 0) {
            return 1;
        }

        while (n != 0) {
            n = n >> 1;
            mask = (mask << 1) | 1;
        }

        int complement = (notoperation & mask);
        return complement;
    }
};

int main() {
    int n = 5; // Example input

    Solution sol;
    int result = sol.bitwiseComplement(n);

    cout << "Bitwise complement of " << n << " is: " << result << endl;

    return 0;
}
