// WRITE A C PROGRAM  TO READ AND STORE THE ROLL NO. AND MARKS OF 20 STUDENTS USING ARRAY.

#include <stdio.h>

int main()
{
    int rollno[5],i,marks[5];
    
    for(i=0;i<=5;i++)
    {
        printf("\nenter rollno. of student rollno.[%d]:",i+i);
        scanf("%d",&rollno[i]);
        printf("\nEnter  marks of students marks[%d]: ",i+i);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=5;i++)
    {
        printf("\nRollno:%d\n Marks[i]:%d",rollno[i],marks[i]);
    }

    return 0;
}
