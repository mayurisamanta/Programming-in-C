//Write a C program to find the sum of individual digits of a positive integer.

#include <stdio.h>

int main(){
	
	int nums, temp, sum = 0;
		
	printf("Enter a positive integer: \n");
	scanf("%d", &nums);
	
	temp = nums;
	
	for (int i = temp; temp > 0; temp = temp/10) sum += temp%10;
	
	printf("Sum of individual digits of %d is %d", nums, sum);
	
  return 0;
}
