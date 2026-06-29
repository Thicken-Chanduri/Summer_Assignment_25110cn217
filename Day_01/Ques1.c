#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("enter the value of N':");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        sum+=b;

    }
    printf("the sum of first %d natural numbers is %d",a,sum);
    return 0;
}
