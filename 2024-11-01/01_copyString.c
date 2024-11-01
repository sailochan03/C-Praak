#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copyString(char *dest, char *src) {
    int index = 0;
    while (src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
}

int main() {
    char *src;
    int size;

    printf("Enter string size: ");
    scanf("%d", &size);
    getchar();

    if (size <= 0) {
        printf("Invalid size. Exiting.\n");
        return 0;
    }

    src = (char*)malloc(size + 1);
    if (src == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter a string: ");
    fgets(src, size + 1, stdin);
    src[strcspn(src, "\n")] = '\0';
    printf("Entered string: %s | Address: %p\n", src, (void*)&src);

    char *dest = (char*)malloc(size + 1);
    if (dest == NULL) {
        printf("Memory allocation failed.\n");
        free(src);
        return 0;
    }

    copyString(dest, src);
    printf("Destination string: %s | Address: %p\n", dest, (void*)&dest);

    free(src);
    free(dest);

    return 0;
}
