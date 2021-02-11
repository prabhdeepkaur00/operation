//W.A.P TO TO FIND FACTORIAL OF GIVEN  NO.

#include <stdio.h>

int main()
{
    int i,f=1,num;
    printf("enter a no.:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    
    f=f*i;
    printf("The factorial of %d is:%d\n",num, f);
 
     return 0;
}
