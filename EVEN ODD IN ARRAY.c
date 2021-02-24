//WRITE A PROGRAM TO FIND OUT WHICH NUMBER IS NO. EVEN AND ODD FROM THE LIST OF 10 NO. USSING ARRRAY.

#include <stdio.h>

int main()
{
      
    int a[10],i;
    for(i=0;i<9;i++)
    {
        printf(" Enter Value in Array at Position [%d] :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n %d is an EVEN number.",a[i]);
        }
        else

        {
            printf("\n %d is an ODD number.",a[i]);
        }
    }
    return 0;



    return 0;
}
