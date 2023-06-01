#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int findLHS(std::vector<int>& nums) {
    std::unordered_map<int, int> freqMap;
    int maxLen = 0;

    // Count the frequency of each number
    for (int num : nums) {
        freqMap[num]++;
    }

    // Check for harmonious subsequence
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        int num = it->first;
        int freq = it->second;

        // Check if the corresponding number exists
        if (freqMap.count(num + 1)) {
            maxLen = std::max(maxLen, freq + freqMap[num + 1]);
        }
    }

    return maxLen;
}

int main() {
    std::vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int longestSubsequence = findLHS(nums);
    std::cout << "Length of the longest harmonious subsequence: " << longestSubsequence << std::endl;
    return 0;
}
