#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(2);
    unordered_set<int> numSet;
    int duplicate = 0;
    
    // Find the duplicate number
    for (int num : nums) {
        if (numSet.count(num) > 0) {
            duplicate = num;
            break;
        }
        numSet.insert(num);
    }
    
    // Find the missing number
    for (int i = 1; i <= n; i++) {
        if (numSet.count(i) == 0) {
            result[1] = i;
            break;
        }
    }
    
    result[0] = duplicate;
    return result;
}

int main() {
    vector<int> nums;
    int n;
    cout<<"enter the number of elements required"<<endl;
    cin>>n;
    cout<<"enter the nummbers"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    
    vector<int> result = findErrorNums(nums);
    
    // Print the result
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}
