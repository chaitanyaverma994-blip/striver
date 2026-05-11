#include<stdio.h>
int main()
{   int sum=0;
    int a;
    printf("enter the value in a \n");
    scanf("%d",& a);
    int b;
    printf("enter the value in b");
    scanf("%d",& b);
    for(int i=a; i<=b; i++)
    {
        sum=sum+i;
    }
    printf("the result of summation from %d to %d is %d",a,b,sum);
    return 0;
}