#include <iostream>
#include <vector>
using namespace std;

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int i = m - 1;  // Index of last element in nums1
    int j = n - 1;  // Index of last element in nums2
    int k = m + n - 1;  // Index of last position in merged array nums1
    
    // Merge nums1 and nums2 from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    
    // Copy the remaining elements from nums2 if any
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    int n,m;
    vector<int> nums1;
    vector<int> nums2;
    cout<<"enter the number of elements of first array"<<endl;
    cin>>m;
    cout<<"enter the number of elements of second array"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<m;i++)
    {
        int k;
        cin>>k;
        nums1.push_back(k);
    }
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    merge(nums1,m,nums2,n);
    
    // Print the merged array nums1
    for (int num : nums1) {
        std::cout << num << " ";
    }
    
    return 0;
}
