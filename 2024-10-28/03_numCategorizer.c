#include <stdio.h>
int main() {
    float x, minusSum = 0, plusSum = 0;
    int zeroCount = 0;

    printf("Enter X: ");
    scanf("%f", &x);

    if (x == 0) {
        zeroCount++;
    } else if (x > 0) {
        plusSum += x;
    } else {
        minusSum += x;
    }

    printf("Zero Count: %d\nPlus Sum: %.2f\nMinus Sum: %.2f", zeroCount, plusSum, minusSum);

    return 0;
}