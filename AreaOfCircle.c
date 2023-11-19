/*Function to find area of a circle*/

#include <stdio.h>

main () {
    float radius, area;

    printf("Enter radius of circle : ");

    scanf("%f", &radius);

    area = (22/7) * radius * radius;

    printf("Area of Circle is %f \n", area);

    return 0;
}