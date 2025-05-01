#include <iostream>
using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while (left < right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return left << shift;
    }
};

int main() {
    int left = 5;
    int right = 7;

    Solution sol;
    int result = sol.rangeBitwiseAnd(left, right);

    cout << "Bitwise AND of numbers from " << left << " to " << right << " is: " << result << endl;

    return 0;
}
