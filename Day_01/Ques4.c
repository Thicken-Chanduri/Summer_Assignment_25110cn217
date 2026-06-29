#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        a/=10;
        count+=1;

    }
    printf("Number of digits in %d is %d",b,count);
    return 0;
    
}
