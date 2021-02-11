//W.A.P TO PREPARE PAY SLIP..

#include <stdio.h>

int main()
{
    float basic,da, hra, ma=300,pf,gross,net;
    printf("enter basic income of the employee:");
    scanf("%f",&basic);
    
    da=(0.1)*basic;
    hra=(7.5/100)*basic;
    pf=(12.5/100)*basic;
    gross=basic + da+hra+ma;
    net=gross-pf;

    printf("\n Da=%.2f\nHra=%.2f\nMa=300 \n Pf=%.2f\n gross=%.2f\n net=%.2f\n",da,hra,ma,pf,gross,net);
     return 0;
}
