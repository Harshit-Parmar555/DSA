#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = 0;

        for (int i = 0; i < 32; i++) {
            int sum = 0;

            for (int num : nums) {
                if ((num >> i) & 1) {
                    sum++;
                }
            }

            if (sum % 3 == 1) {
                answer |= (1 << i);
            }
        }

        return answer;
    }
};

int main() {
    // Sample input: [2, 2, 3, 2]
    vector<int> nums = {2, 2, 3, 2};

    Solution sol;
    int result = sol.singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}
