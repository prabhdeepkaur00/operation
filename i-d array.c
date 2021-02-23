// WRITE A C PROGRAM FOR LOOP TO INPUT AND PRINT ELEMENT OF A 1-D ARRAY.

#include <stdio.h>

int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nprinting elemenys of the array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
