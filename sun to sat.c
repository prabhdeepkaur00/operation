//W.A.P TO TO READ NO. 1 T0 7 AND PRINT SUN TO SAT

#include <stdio.h>

int main()
{
    int day;
    printf("enter day 1 to 7");
    scanf("%d",&day);
    switch(day)
    {    
        case 1:printf("Sunday");
               break;
           
        case 2:printf("Monday");
              break;
           
        case 3:printf("Tuesday");
              break;
    
        case 4:printf("wednesday");
             break;
    
        case 5:printf("Thuresday");
              break;
          
        case 6:printf("Friday");
               break;
    
        case 7:printf("saturday");
               break;
    }           
     return 0;
}
