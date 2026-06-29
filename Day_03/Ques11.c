//To find GCD of two numbers.
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the two numbers");
    scanf("%d %d", &n,&m);
    while(m!=0)
    {
        int temp=m;
        m=n%m;
        n=temp;
    }
    printf("GCD=%d", n);
    return 0;
}
