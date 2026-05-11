#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks \n");
    scanf("%d",& marks);
    if(marks>=90 && marks<=100)
    { printf("A grade");
    }
    else if(marks>=70 && marks<90)
    { printf("B grade");
    }
    else if(marks>=50 && marks<70)
    { printf("C grade");
    }
    else if(marks>=35 && marks<50)
    { printf("D grade");
    }
    else if(marks>=0 && marks<35)
    { printf("Fail");
    }
    else
    { printf("invalid input");}
    return 0;
}