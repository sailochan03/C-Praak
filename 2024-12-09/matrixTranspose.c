#include <stdio.h>

int main() {
    int a, b;

    printf("Enter dimensions of matrix (a x b): \n");
    scanf("%d %d", &a, &b);

	if (a != 0 && b != 0){
        matrixTranspose(a, b); 
    }else {
        printf("Transpose is not possible\n");
    }

    return 0;
}

void matrixTranspose(int a, int b) {
    int arr1[a][b]; 
    int arr2[b][a];

    // Taking user input for the first matrix
    printf("Enter elements for matrix:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            arr2[j][i] = arr1[i][j];
        }
    }
    
    printf("Input Matrix :\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    
    printf("Transpose Matrix :\n");
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
}

