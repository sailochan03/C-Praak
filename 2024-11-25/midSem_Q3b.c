#include <stdio.h>
#include <string.h>

int main() {
    char s[] = {'S', 'O', 'A', 'D', 'U', '\0'};
    int i = 0, j = strlen(s) - 1;

    while(i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++; j--;
    }

    printf("%s\n", s);
    return 0;
}