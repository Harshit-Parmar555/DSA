#include "iostream"
#include "vector"
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int answer = 0;
        int length = nums.size();
        for (int i = 0; i < length; i++)
        {
            answer ^= nums[i];
        }
        return answer;
    }
};

int main()
{
    // Sample input: [4, 1, 2, 1, 2]
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution sol;
    int result = sol.singleNumber(nums);
    cout << "The single number is: " << result << endl;

    return 0;
}
