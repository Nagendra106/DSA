#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minDifference(vector<int>& nums, int k) {
    int n = nums.size();
    if (n <= 1)
        return 0;

    sort(nums.begin(), nums.end());

    int minScore = nums[n - 1] - nums[0];

    for (int i = 0; i < n - 1; i++) {
        int small = min(nums[0] + k, nums[i + 1] - k);
        int large = max(nums[i] + k, nums[n - 1] - k);
        minScore = min(minScore, large - small);
    }

    return minScore;
}

int main() {
    vector<int> nums = {1};
    int k = 0;

    int result = minDifference(nums, k);

    cout << "Minimum score: " << result << endl;

    return 0;
}
