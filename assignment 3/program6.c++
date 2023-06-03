#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        } else {
            digits[i] = 0;
        }
    }

    // If all digits are 9, append an additional digit
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};

    std::cout << "Original digits: ";
    for (const auto& digit : digits) {
        std::cout << digit;
    }
    std::cout << std::endl;

    std::vector<int> result = plusOne(digits);

    std::cout << "Resulting digits: ";
    for (const auto& digit : result) {
        std::cout << digit;
    }
    std::cout << std::endl;

    return 0;
}

