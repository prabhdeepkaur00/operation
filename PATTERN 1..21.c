//W.A.P TO PRINT PATTERNS: AAAAA
//                         BBBB
//                         CCC
//                         DD
//                         E
#include <stdio.h>

int main()
{
    int i,j;
    char input, alphabet='A';
    printf("Enter uppercase character:");
    scanf("%c",&input);
    for(i=(input-'A'+1);i>=1;--i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c",alphabet);
        }
        ++alphabet;
        printf("\n");
    }

    return 0;
}
