#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        int count = 0;
        while (n != 0) {
            if (n & 1) {
                count++;
            }
            n = n >> 1;
        }
        return count == 1;
    }
};

int main() {
    int input = 15; // Example input
    Solution sol;

    if (sol.isPowerOfTwo(input)) {
        cout << input << " is a power of two." << endl;
    } else {
        cout << input << " is NOT a power of two." << endl;
    }

    return 0;
}
