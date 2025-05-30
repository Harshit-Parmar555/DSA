#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int sum = a ^ b;
            int carry = (a & b) << 1;

            a = sum;
            b = carry;
        }
        return a;
    }
};

int main() {
    int a = 5, b = 3; // Example input

    Solution sol;
    int result = sol.getSum(a, b);

    cout << "The sum of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
