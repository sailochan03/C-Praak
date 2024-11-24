#include <stdio.h>
int main() {
    int number = 0;
    int num = number / 10;
    int count = 1;
    while (num > 0) {
        count++;
        num /= 10;
    }
    printf("The number of digits in %d is %d.\n", number, count);
    return 0;
}
