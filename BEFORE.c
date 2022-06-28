#include<stdio.h>
#include <time.h>

#define x 3.147
void main()
{
    float r,A;
    printf("Enter the radius for the circle: ");
    scanf("%f",&r);
 double time_spent = 0.0;
 
    clock_t begin = clock();
 
 
    clock_t end = clock();
 
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    A=x*r*r;
    printf("\nArea of a circle:%f",A);
printf("The elapsed time is %f seconds", time_spent);

}
