//write a program to compare fehrenheit from centigrade(f=1.8*c)+32
#include<stdio.h>
#include<conio.h>
void main()
{

       float f,c;
       clrscr();
       printf("enter centigrade:");
       scanf("%f",&c)
       f=(1.8*c)+32;
       printf("\n fehrenheit:%f",f);
       getch();
}