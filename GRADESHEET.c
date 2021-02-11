//W.A.P GRADE  ACCORDING TO FOLLOWING TABLE.

#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if(marks>80)
    {
        printf("distination");
    }
    else if(marks>60)
    {
        printf("first class");
    }
    else if (marks>40)
    {
        printf("second class");
    }
    else 
    {
        printf("fail");
    }

    return 0;
}
