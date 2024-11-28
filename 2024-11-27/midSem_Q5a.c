#include <stdio.h>
void sortwsalg(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int arr[] = {6, 4, 2, 5, 1};

    sortwsalg(arr + 0, arr + 1);
    sortwsalg(arr + 1, arr + 2);
    sortwsalg(arr + 2, arr + 3);
    sortwsalg(arr + 3, arr + 4);
    
    sortwsalg(arr + 0, arr + 1);
    sortwsalg(arr + 1, arr + 2);
    sortwsalg(arr + 2, arr + 3);

    sortwsalg(arr + 0, arr + 1);
    sortwsalg(arr + 1, arr + 2);

    sortwsalg(arr + 0, arr + 1);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}