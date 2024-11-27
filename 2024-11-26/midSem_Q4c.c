#include <stdio.h>
void displayReversed(int n) {
    if (n == 0)
        return;
    int digit = n % 10;
    printf("%d ", digit);
    displayReversed(n / 10);
}
int main() {
    int n = 2345;
    displayReversed(n);
    return 0;
}