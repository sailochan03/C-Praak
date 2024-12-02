#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int search_element(int arr[], int size, int target) {
    int bottom = 0, top = size - 1; 
    bool found = false;
    int index = -1;

    while (bottom <= top) {
        int middle = bottom + (top - bottom) / 2;

        if (arr[middle] == target) {
            index = middle;
            return index;
        } else if (arr[middle] > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }
    return index;
}
 
int main() {
    int *arr;
	int size;
	
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	arr = (int*) malloc(size * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed.\n");
		return 0;
	}
	
	for (int i = 0; i < size; i++) {
		printf("Enter element at index %d: ", i);
		scanf("%d", &(arr[i]));
		printf("\n");
	}
	
	int target;
	printf("Enter the element you want to find: ");
	scanf("%d", &target);
	
	int index = search_element(arr, size, target);

	if (index != -1) {
		printf("Element found at index %d.\n", index);
	} else {
		printf("Element is not found in the array.\n");
	}
	
	free(arr);
	
    return 0;
}
