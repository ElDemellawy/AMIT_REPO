#include <stdio.h>
#include <stdlib.h>
long calc (int m)
{
    int x,y,z;//comment//
    long r;
    printf("please enter the first number \n");
    scanf("%d",&x);
    printf("please enter the second number \n");
    scanf("%d",&y);
    printf(" please enter 1 for + , 2 for - , 3 for * or 4 for / \n ");
    scanf("%d",&z);
    if(z>=1 && z<=4)
    {
    switch (z)
    {
    case(1):
        r=x+y;
        printf("the add result = %ld",r);
        break;
     case (2):
        r=x-y;
        printf("the sub result = %ld",r);
        break;
     case (3):
        r=x*y;
        printf("the mult result = %ld",r);
          break;
     case(4):
         r=x/y;
         printf("the div result = %ld",r);
          break;
    }
    }
    else
      {
          printf(" error");
}
return r;
}

int main()
{
    long v,k;
    v=calc(k);
    return 0;
}
