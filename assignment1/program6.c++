#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> numSet;
    
    for (int num : nums) {
        // Check if the number is already in the set
        if (numSet.count(num) > 0) {
            return true; // Duplicate found
        }
        
        // Insert the number into the set
        numSet.insert(num);
    }
    
    return false; // No duplicates found
}

int main() {
    vector<int> nums;
    int n;
    cout<<"enter the number of elements required"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    bool result = containsDuplicate(nums);
    
    // Print the result
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}
