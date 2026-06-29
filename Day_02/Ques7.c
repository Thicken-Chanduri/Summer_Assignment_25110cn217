#include<stdio.h>
int main()
{
    int a,b,prod=1;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        prod*=b;
        a/=10;
    }
    printf("Product of digits is %d",prod);
    return 0;
}
