#include <iostream>
#include <vector>
using namespace std;
std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();
    
    // Increment the least significant digit by 1
    digits[n-1] += 1;
    
    // Carry over if there is any
    int carry = digits[n-1] / 10;
    digits[n-1] %= 10;
    
    // Iterate from the second least significant digit
    for (int i = n-2; i >= 0; i--) {
        if (carry == 1) {
            digits[i] += 1;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }
    }
    
    // If there is still a carry, insert it at the beginning
    if (carry == 1) {
        digits.insert(digits.begin(), 1);
    }
    
    return digits;
}

int main() {
    int n,i;
    std::vector<int> digits;
    std::vector<int> result;
    cout<<"enter the number of values required"<<endl;
    cin>>n;
    cout<<"enter the values into the array"<<endl;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        digits.push_back(k);
    }
    result= plusOne(digits);
    
    // Print the result
    for (int digit : result) {
        std::cout << digit << " ";
    }
    
    return 0;
}
