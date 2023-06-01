#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumProduct(vector<int>& nums) {
    int n = nums.size();

    // Sort the array in ascending order
    sort(nums.begin(), nums.end());

    // Return the maximum of two possible products:
    // 1. Product of the three largest numbers (last three elements)
    // 2. Product of the two smallest numbers (first two elements) and the largest number (last element)
    return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
}

int main() {
    vector<int> nums = {1, 2, 3};

    int result = maximumProduct(nums);

    cout << "Maximum product: " << result << endl;

    return 0;
}

