#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> result;
    int n = nums.size();
    
    // Sort the array in ascending order
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
        // Skip duplicate values for the first element
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < n - 2; j++) {
            // Skip duplicate values for the second element
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    // Found a valid quadruplet
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

                    // Skip duplicate values for the third element
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    // Skip duplicate values for the fourth element
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // Move the pointers
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;  // Move left pointer towards right
                } else {
                    right--;  // Move right pointer towards left
                }
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    std::vector<std::vector<int>> result = fourSum(nums, target);

    std::cout << "Quadruplets summing up to target:" << std::endl;
    for (const auto& quadruplet : result) {
        for (const auto& num : quadruplet) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
