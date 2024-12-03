#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    if(rows == 0 || cols == 0) {
    	printf("Rows or Columns can not be zero.");
    } else {
    	int original[rows][cols];
    	int transposed[cols][rows];
    	
    	printf("Enter the elements of the matrix.\n\n");
    	for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
        		printf("Element [%d][%d]: ", i, j);
            	scanf("%d", &original[i][j]);
        	}
    	}

    	// Calculate the transpose
    	for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
            	transposed[j][i] = original[i][j];
        	}
    	}
    	
    	printf("\n");
    
    	printf("Original matrix: \n");
    	for (int i = 0; i < rows; i++) {
        	for (int j = 0; j < cols; j++) {
            	printf("%d ", original[i][j]);
        	}
        	printf("\n");
    	}
    	
    	printf("\n");

    	printf("Transposed Matrix:\n");
    	for (int i = 0; i < cols; i++) {
        	for (int j = 0; j < rows; j++) {
            	printf("%d ", transposed[i][j]);
        	}
        	printf("\n");
    	}
    }
    return 0;  
}
