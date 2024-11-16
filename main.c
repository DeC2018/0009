#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

bool isPalindrome(int x) {
    int rem, temp, sum = 0;
    temp = x;
    while(x != 0) {
        rem = x % 10;
        if(sum > INT_MAX/10 || sum < INT_MIN/10)
            return false;
        sum = (sum * 10) + rem;
        x = x/10;
    }
    if(sum < 0)
        sum = -sum;
    if(sum == temp) {
        return true;
    }
    else if(sum == -temp)
        return false;
    else
        return false;
}

int main() {
    // Test cases
    int test_cases[] = {121, -121, 10};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for(int i = 0; i < num_tests; i++) {
        bool result = isPalindrome(test_cases[i]);
        printf("Input: x = %d\n", test_cases[i]);
        printf("Output: %s\n\n", result ? "true" : "false");
    }
    
    return 0;
}
