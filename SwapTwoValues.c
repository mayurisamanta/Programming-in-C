/* Write a C Program – using pointers To Swap the Values of Two Variables. */

#include <stdio.h>

int main(){
	int x;
	int y;
	
	printf("Enter first value :");
	scanf ("%d", &x);
	printf("Enter second value: ");
	scanf ("%d", &y);
	
	int* a = &x;
	int* b = &y;
	
	int temp = *a;
    *a = *b;
    *b = temp;
	
	printf("x = %d y = %d", x, y);
    return 0;
}
