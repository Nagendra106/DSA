#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Find the first pair of consecutive elements in decreasing order
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Find the smallest element in the subarray nums[i:] that is greater than nums[i]
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            j--;
        }

        // Swap nums[i] with nums[j]
        std::swap(nums[i], nums[j]);
    }

    // Reverse the subarray nums[i+1:] to get the smallest lexicographic order
    std::reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3};

    std::cout << "Current permutation: ";
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    nextPermutation(nums);

    std::cout << "Next permutation: ";
    for (const auto& num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
