class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m > n) return -1;  // needle longer than haystack

        for (int i = 0; i + m <= n; i++) {          // i is start index in haystack
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return i;                   // matched full needle
        }
        return -1;
    }
};