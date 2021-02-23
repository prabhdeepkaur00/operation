//W.A.P OF HALF PYRAMID ABCDE
//                      ABCD 
//                      ABC
//                      AB 
//                      A 
                        
                                               
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the no. of rows:");
    scanf("%d",&rows);
    
    for(i=69;i>=65;i--)
    {
        for(j=65;j<=i;++j)
        {
            printf("%c",j);
        }
        printf("\n");
    }

    return 0;
}
