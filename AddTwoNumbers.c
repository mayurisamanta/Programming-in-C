/*Program to add two numbers*/

#include <stdio.h>

int main () {

    int firstNum, SecondNum, result;

    printf("Print first number : \n");
    scanf("%d", &firstNum);

    printf("Print Second number : \n");
    scanf("%d", &SecondNum);

    result = firstNum + SecondNum;

    printf("Sum of %d and %d is %d \n", firstNum, SecondNum, result);

}