class Solution {
public:
    bool isPalindrome(int x) {
        // 1. Negative numbers and numbers ending with 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int reversedHalf = 0;

        // 2. Build the reversed half of the number
        while (x > reversedHalf) {
            int digit = x % 10;                 // get last digit
            reversedHalf = reversedHalf * 10 + digit; // append digit to reversedHalf
            x /= 10;                            // remove last digit from x
        }

        // 3. For even digits: x == reversedHalf
        //    For odd digits: x == reversedHalf / 10 (middle digit doesn't matter)
        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};