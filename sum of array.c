// WRITE A C PROGRAM  print the sum of element of array.

#include <stdio.h>

int main()
{
    int arr[5],i,n,sum=0;
    
    for(i=0;i<5;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nsum of all elemenys of the array:%d\n",sum);
    

    return 0;
}
