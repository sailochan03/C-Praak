#include <stdio.h>
int main() {
    int arr[] = {6, 7, 7, 3, 1, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[size], index = 0;

    int i = 0, j = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
            arr2[index++] = arr[i];
    }
    for (int i = 0; i < index; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}