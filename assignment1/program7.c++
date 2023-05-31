#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int nonZeroIndex = 0;
    
    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex] = nums[i];
            nonZeroIndex++;
        }
    }
    
    // Fill the remaining positions with zeros
    for (int i = nonZeroIndex; i < n; i++) {
        nums[i] = 0;
    }
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
    
    moveZeroes(nums);
    
    // Print the modified array nums
    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}
