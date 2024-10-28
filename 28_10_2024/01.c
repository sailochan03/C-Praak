#include <stdio.h>
int main() {
    float item, product;
    printf("Enter item value: ");
    scanf("%f", &item);
    printf("Enter product value: ");
    scanf("%f", &product);
    if (item != 0) {
        product *= item;
    }
    printf("Product = %.2f", product);
    return 0;
}
