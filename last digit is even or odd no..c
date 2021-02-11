//W.A.P TO TO check the last digit of no. is odd or even

#include <stdio.h>

int main()
{
    int n1;
    printf("enter a no.");
    scanf("%d",&n1);
    if((n1%10)%2==0)
    {
        printf("even no.");
    } 
    else
    {
        printf("odd no."); 
    }
     return 0;
}
