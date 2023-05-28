#include<stdio.h>
void main()
{
    int arr[5];
    int i;
    printf("Enter the elements in the array:\n\n");
    for (i=0;i<5;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nThe array is:");
     for (i=0;i<5;i++)
    {
        printf("%d " , arr[i]);

    }


}
