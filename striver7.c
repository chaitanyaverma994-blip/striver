#include<stdio.h>
int main()
{   int n;
    printf("enter the number of elements = ");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
     scanf("%d",& arr[i]);
    }
    printf("the array is \n");
    for(i=0; i<n; i++)
    {
     printf("%d \n",arr[i]);
    }
    printf("the reversed array is \n");
    for(i=n-1; i>=0; i--)
    {
     printf("%d \n",arr[i]);
    }
    return 0;
}