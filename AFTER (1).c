#include<stdio.h>
#include <time.h>

int main()
{
    int n,fact;
    fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
 double time_spent = 0.0;
 
    clock_t begin = clock();
 
 
    clock_t end = clock();
 
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    do{
        fact=fact*n;
        n--;
    }while(n>0);
    printf("The factorial value is %d",fact);
printf("The elapsed time is %f seconds", time_spent);
    return 0;
}
