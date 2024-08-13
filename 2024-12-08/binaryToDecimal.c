#include <stdio.h>
#include <math.h>

int main () {
	int binaryNum;
	printf("Enter a binary number: ");
	scanf("%d", &binaryNum);
	
	int decimal = 0, exponent = 0;
	
	while (binaryNum > 0) {
		int remainder = binaryNum % 10;
		decimal += remainder * pow(2,exponent++);
		binaryNum /= 10;
	}
	
	printf("%d", decimal);
	
	return 0;
}
