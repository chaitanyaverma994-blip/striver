#include<stdio.h>
int main()
{   int value;
    int sum=0;
    int digit;
    printf("enter the value of digit");
    scanf("%d",& digit);
    for(int i=0; i<50; i++)
    { sum=sum+digit;
      digit=digit+10;
      printf("%d \n",digit);
    }
    printf("the sum value is %d",sum);
    return 0;
}