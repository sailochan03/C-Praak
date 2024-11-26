#include <stdio.h>
int max_element(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}