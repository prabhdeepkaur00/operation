//W.A.P TO PRINT PATTERNS:   *
//                          * *
//                         * * *
//                        * * * *
//                       * * * * *
#include <stdio.h>

int main()
{
    int i,r,s,k=0;
    printf("Enter no. of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;++i,k=0)
    {
        for(s=1;s<=r-i;++s)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
        printf("*");
        ++k;
        }
        printf("\n");
    }

    return 0;
}
