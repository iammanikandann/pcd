#include<stdio.h>
#include <time.h>

void main()
{
    float r;
    printf("Enter the radius for the circle: ");
    scanf("%f",&r);
 double time_spent = 0.0;
 
    clock_t begin = clock();
 
 
    clock_t end = clock();
 
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nArea of a circle:%f",3.147*r*r);
printf("The elapsed time is %f seconds", time_spent);

}
