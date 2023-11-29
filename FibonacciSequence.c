/* Write a C Program to Display Fibonacci Sequence. */

#include <stdio.h>

int main(){
	
	int num;
	
    printf("Enter a positive number: ");
	scanf("%d", &num);
	
	int num1 = 0;
	int num2 = 1;
	int sum = 0;
	
	printf("%d %d ", num1, num2);
	
	for (int i = 3; i <= num; i++) {
		
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		
		printf("%d ", sum);
	}

    printf("\n");
}