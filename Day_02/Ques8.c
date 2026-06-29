#include <stdio.h>
int main()
{
    int a,b,c,rev=0;
    printf("Enter th enumber");
    scanf("%d",&a);
    c==a;
    while(a!=0);
    {
        b=a%10;
        rev=rev*10+b;
        a/=10;
    }
    if(rev==c)
    {
        printf("%d is a palindrome",c);
    }
    else
    {
        printf("%d is not a palindrome",c);
    }
    return 0;
    
}
