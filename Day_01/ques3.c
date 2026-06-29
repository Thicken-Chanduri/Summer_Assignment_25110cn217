#include<stdio.h>
int main()
{
    int a,b,fact=1;
    printf("enter the value of the number:");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        fact=fact*b;
    }
    printf("Factorial of %d is %d",a,fact);
    return 0;
}
    

