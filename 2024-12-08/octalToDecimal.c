#include <stdio.h>
#include <math.h>

int main () {
	int octalNum;
	printf("Enter an octal number: ");
	scanf("%d", &octalNum);
	
	int decimal = 0, exponent = 0;
	
	while (octalNum > 0) {
		int remainder = octalNum % 10;
		decimal += remainder * pow(8,exponent++);
		octalNum /= 10;
	}
	
	printf("%d", decimal);
	
	return 0;
}
