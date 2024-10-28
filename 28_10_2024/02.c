#include <stdio.h>
int main() {
    float x, y;
    printf("Enter X: ");
    scanf("%f", &x);
    printf("Enter Y: ");
    scanf("%f", &y);

    if(x > y) y = x - y;
    else y = y - x;
    
    printf("Difference: %.2f\n", y);
    return 0;
}