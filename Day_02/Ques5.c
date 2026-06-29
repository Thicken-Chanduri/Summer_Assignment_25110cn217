#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        sum+=b;
        a/=10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}
