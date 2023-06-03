#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int threeSumClosest(std::vector<int>& nums, int target) {
    int n = nums.size();
    int closestSum = INT_MAX;  // Initialize with a large value

    // Sort the array in ascending order
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == target) {
                return sum;  // Exact match found
            }

            // Update closestSum if the current sum is closer to the target
            if (abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }

            if (sum < target) {
                left++;  // Move left pointer towards right
            } else {
                right--;  // Move right pointer towards left
            }
        }
    }

    return closestSum;
}

int main() {
    std::vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int closestSum = threeSumClosest(nums, target);

    std::cout << "Closest sum to target: " << closestSum << std::endl;

    return 0;
}
