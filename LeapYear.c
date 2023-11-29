/* Write a program in C to check whether the entered year is leap year or not.*/
#include <stdio.h>
int main(){
	int year;
		
    printf("Enter year : ");    
	scanf("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d is a Leap Year \n", year);
	}	
	else printf("%d is not a Leap Year \n", year);
	
    return 0;
}
