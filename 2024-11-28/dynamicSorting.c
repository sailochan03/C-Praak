#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int *numbers = (int *)calloc(n , sizeof(int));
    
    if (numbers == NULL) {
        printf("Memory not available\n");
        exit(1);
	}
    printf("Enter integers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    sort(numbers, n);

    printf("Sorted integers:\t");
    
    for(int i = 0; i < n; i++) {
        printf("%d\t", numbers[i]);
    }

    free(numbers);
    printf("\n\n");

    return 0;
}
