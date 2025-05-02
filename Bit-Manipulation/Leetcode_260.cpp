#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int diff = 0;
        for (int i = 0; i < nums.size(); i++) {
            diff ^= nums[i];
        }

        diff = (diff & (diff - 1)) ^ diff;

        int a = 0, b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] & diff) == 0) {
                a ^= nums[i];
            } else {
                b ^= nums[i];
            }
        }

        return {a, b};
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 4, 2, 5};

    Solution sol;
    vector<int> result = sol.singleNumber(nums);

    cout << "The two unique numbers are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
