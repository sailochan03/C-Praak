#include <stdio.h>
int max_element(int arr[], int n, int max) {
    if (n == 0)
        return max;
    if (arr[n] > max)
        max = arr[n];
    return max_element(arr, n - 1, max);
}

int main() {
    int arr[] = {1, 12, 3, 4, 5};
    printf("%d", max_element(arr, 4, arr[0]));
}