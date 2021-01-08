//WRITE A PROGRAM TO THAT PERFORM AS CALCULATOR( ADDITION, MULTIPLICATION, DIVISION,AND SUBTRACTION)
#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,sum,sub,mult;
    float div;
    clrscr();
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum:%d",sum);
    sub=a-b;
    printf("\nsub:%d",sub);
    mult=a*b;
    printf("\nmult:%d",mult);
    div=a/(float)b;
    printf("\ndiv:%.2f",div);
    getch();
}
