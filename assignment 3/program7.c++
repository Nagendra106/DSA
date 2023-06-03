#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> findMissingRanges(std::vector<int>& nums, int lower, int upper) {
    std::vector<std::string> result;

    // Helper function to generate a range string
    auto generateRangeString = [](int start, int end) {
        if (start == end) {
            return std::to_string(start);
        } else {
            return std::to_string(start) + "->" + std::to_string(end);
        }
    };

    // Find missing ranges
    int n = nums.size();
    long long start = static_cast<long long>(lower);
    for (int i = 0; i <= n; i++) {
        long long end = (i == n) ? static_cast<long long>(upper) + 1 : static_cast<long long>(nums[i]);
        if (start < end) {
            result.push_back(generateRangeString(start, end - 1));
        }
        start = end + 1;
    }

    return result;
}

int main() {
    std::vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0;
    int upper = 99;

    std::vector<std::string> ranges = findMissingRanges(nums, lower, upper);

    std::cout << "Missing ranges: ";
    for (const auto& range : ranges) {
        std::cout << "[" << range << "] ";
    }
    std::cout << std::endl;

    return 0;
}
