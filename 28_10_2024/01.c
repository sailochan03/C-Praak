#include <stdio.h>
int main() {
    float item;
    float product = 1.0;
    printf("Enter item value: ");
    scanf("%f", &item);
    if (item != 0) {
        product *= item;
    }
    printf("Product = %.2f", product);
    return 0;
}
