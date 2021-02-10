//write a program to read marks of student from keyboard whether the student is pass or fail.

#include <stdio.h>

int main()
{
    int n ;
    printf("enter marks");
    scanf("%d",&n);
    if(n>=40)
    {
        printf("student is pass");
    }
    else
    {
        printf("student is fail");
    }

    return 0;
}

