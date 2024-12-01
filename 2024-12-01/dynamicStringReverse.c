#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseString(char* str) {
    int n = strlen(str);
    char* reversed = (char*)malloc((n + 1) * sizeof(char));
    
    if(reversed == NULL) {
        printf("Memory not available!\n");
        exit(7);
    }
    for(int i = 0; i < n; i++) {
        reversed[i] = str[n - 1 - i];
    }

    return reversed;
}
int main () {
	int n;
	printf("Enter the size of string: ");
	scanf("%d", &n);
    char *string = (char*)malloc((n + 1) * sizeof(char));

    printf("Enter a string: ");
    gets(string);

    char* reversed = reverseString(string);

    printf("Reversed string: %s\n", reversed);

    free(reversed);

    return 0;
}
