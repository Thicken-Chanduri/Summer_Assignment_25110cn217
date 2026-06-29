#include <stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        sum=sum*10+b;
        a/=10;
    }
    printf("Reversed number is: %d",sum);
    return 0;

}
