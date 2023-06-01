#include <iostream>
#include <vector>
#include <unordered_set>

int distributeCandies(std::vector<int>& candyType) {
    std::unordered_set<int> uniqueCandies;
    int maxCandies = candyType.size() / 2;
    
    for (int candy : candyType) {
        uniqueCandies.insert(candy);
        
        if (uniqueCandies.size() == maxCandies) {
            break;
        }
    }
    
    return uniqueCandies.size();
}

int main() {
    std::vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int maxTypes = distributeCandies(candyType);
    std::cout << "Maximum number of different types of candies Alice can eat: " << maxTypes << std::endl;
    return 0;
}
