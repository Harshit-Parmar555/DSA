#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer(n + 1);

        for (int i = 0; i <= n; i++) {
            int num = i;
            int count = 0;
            while (num != 0) {
                if (num & 1) {
                    count++;
                }
                num = num >> 1;
            }
            answer[i] = count;
        }
        return answer;
    }
};

int main() {
    int n = 5; // Example input

    Solution sol;
    vector<int> result = sol.countBits(n);

    cout << "Bit counts from 0 to " << n << ": ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
