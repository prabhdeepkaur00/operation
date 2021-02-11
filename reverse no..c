//W.A.P TO TO REVERSE A NO.

#include <stdio.h>

int main()
{
    int n,rev=0,remainder;
    printf("enter a no.:");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
    }
    printf("Reversed no.:%d\n",rev);
    return 0;
}
