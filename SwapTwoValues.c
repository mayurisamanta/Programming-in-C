/* Write a C Program – using pointers To Swap the Values of Two Variables. */

#include <stdio.h>

int main(){
	int x;
	int y;
	
	printf("Enter first value :");
	scanf ("%d", &x);
	printf("Enter second value: ");
	scanf ("%d", &y);
	
	int temp = x;
	x = y;
	y = temp;
	
	printf("x = %d y = %d \n", x, y);
    return 0;
}
