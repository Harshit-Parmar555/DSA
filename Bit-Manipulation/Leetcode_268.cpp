#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        int answer = 0;

        for (int i = 0; i < length; i++) {
            answer ^= nums[i];
        }

        for (int i = 0; i <= length; i++) {
            answer ^= i;
        }

        return answer;
    }
};

int main() {
    vector<int> nums = {3, 0, 1}; // Example input

    Solution sol;
    int missing = sol.missingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}
