#include <stdbool.h>
#include <string.h>

static bool sameFreq(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool checkInclusion(char *s1, char *s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    if (n1 > n2) return false;

    int need[26] = {0};
    int win[26]  = {0};

    // build frequency of s1
    for (int i = 0; i < n1; i++) {
        need[(int)(s1[i] - 'a')]++;
    }

    // first window of size n1
    for (int i = 0; i < n1; i++) {
        win[(int)(s2[i] - 'a')]++;
    }

    if (sameFreq(need, win)) return true;

    // slide window over s2
    for (int i = n1; i < n2; i++) {
        win[(int)(s2[i] - 'a')]++;          // add right char
        win[(int)(s2[i - n1] - 'a')]--;     // remove left char
        if (sameFreq(need, win)) return true;
    }

    return false;
}