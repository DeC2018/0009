#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long reversed = 0;
        int y = x;

        while (y) {
            reversed = reversed * 10 + y % 10;
            y /= 10;
        }

        return reversed == x;
    }
};

int main() {
    Solution solution;
    
    // Test cases
    int test_cases[] = {121, -121, 10};
    
    for (int x : test_cases) {
        bool result = solution.isPalindrome(x);
        cout << "Input: x = " << x << endl;
        cout << "Output: " << (result ? "true" : "false") << endl;
        cout << endl;
    }
    
    return 0;
}
