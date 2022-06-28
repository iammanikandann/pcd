#include<stdio.h>
#include <time.h>

int main()
{
    int i,n;
    int fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
 double time_spent = 0.0;
 
    clock_t begin = clock();
 
 
    clock_t end = clock();
 
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 


    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("The factorial value is %d",fact);
    printf("The elapsed time is %f seconds", time_spent);


    return 0;
}

