class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        // Dictionary to keep a count of all the unique characters in t.
        int targetCounts[128] = {0};
        for (char c : t) targetCounts[c]++;

        // Number of unique characters in t, which need to be present in the window.
        int required = 0;
        for (int i = 0; i < 128; i++) {
            if (targetCounts[i] > 0) required++;
        }

        int left = 0, right = 0;
        // formed is used to track how many unique characters in t
        // are present in the current window in its required frequency.
        int formed = 0;
        int windowCounts[128] = {0};

        // ans list of the form {window length, left, right}
        int minLen = -1, start = 0;

        while (right < s.size()) {
            // Add one character from the right to the window
            char c = s[right];
            windowCounts[c]++;

            // If the frequency of the current character added matches 
            // the desired count in t, then increment the formed count.
            if (targetCounts[c] > 0 && windowCounts[c] == targetCounts[c]) {
                formed++;
            }

            // Try and contract the window till the point where it ceases to be 'valid'.
            while (left <= right && formed == required) {
                c = s[left];

                // Save the smallest window until now.
                if (minLen == -1 || right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // The character at the position pointed by the `left` pointer is no longer a part of the window.
                windowCounts[c]--;
                if (targetCounts[c] > 0 && windowCounts[c] < targetCounts[c]) {
                    formed--;
                }

                // Move the left pointer ahead, this helps to look for a new window.
                left++;
            }

            // Keep expanding the window by moving the right pointer
            right++;
        }

        return minLen == -1 ? "" : s.substr(start, minLen);
    }
};