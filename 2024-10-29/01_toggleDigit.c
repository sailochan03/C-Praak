#include <stdio.h>
#include <string.h>

int main() {
    char num[30];
    printf("Enter a number: ");
    scanf("%s", &num);

    for (int i = 0; i < strlen(num); i++) {
        if (num[i] == '0' || num[i] == '1') 
            num[i] = num[i] ^ 1;
    }

    printf("Swapped number: %s\n", num);
    return 0;
}