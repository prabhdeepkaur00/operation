//W.A.P OF HALF PYRAMID 55555
//                      4444
//                      333
//                      22
//                      1
                        
                                               
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the no. of rows:");
    scanf("%d",&rows);
    
    for(i=rows;i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}
