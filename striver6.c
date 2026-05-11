#include<stdio.h>
int main()
{   int value;
    int i=0;
    int sum=0;
    int digit;
    printf("enter the value of digit \n");
    scanf("%d",& digit);
    while(i<50)
    { sum=sum+digit;
      digit=digit+10;
      printf("%d \n",digit);
      i++;
    }
    printf("the sum value is %d",sum);
    return 0;
}