#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int length = nums.size();

        for (int i = 0; i < length; i++) {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0) {
                return abs(nums[i]);
            }
            nums[index] = -nums[index];
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};  // Example input with duplicate 2

    Solution sol;
    int duplicate = sol.findDuplicate(nums);

    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
