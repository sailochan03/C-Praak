#include <stdio.h>
#include <string.h>

int findFirstOccurrence(const char* haystack, const char* needle) {
    int haystackLength = strlen(haystack);
    int needleLength = strlen(needle);

    for (int i = 0; i <= haystackLength - needleLength; i++) {
        int j;
        for (j = 0; j < needleLength; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needleLength) {
            return i;
        }
    }
    return -1;
}

int main() {
    const char* haystack1 = "sadbutsad";
    const char* needle1 = "sad";
    const char* haystack2 = "leetcode";
    const char* needle2 = "leeto";

    printf("%d\n", findFirstOccurrence(haystack1, needle1));  // Output: 0
    printf("%d\n", findFirstOccurrence(haystack2, needle2));  // Output: -1
    
    return 0;
}
