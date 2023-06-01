#include <vector>
#include <algorithm>
#include <iostream>
int arrayPairSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end()); // Sort the vector in ascending order
    int sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }
    return sum;
}
int main() {
    std::vector<int> nums = {1, 4, 3, 2};
    int result = arrayPairSum(nums);
    std::cout << "Maximum sum of minimum values: " << result << std::endl;
    return 0;
}