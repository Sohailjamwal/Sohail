// Program to implement the deletion function in array.
#include<stdio.h>
void main()
{
    int arr[100],num,i,pos;  //Declaration.
    printf("Enter the number of elements:");
    scanf("%d",&num);
    printf("Enter the array elements:\n");
    for(i=0;i<num;i++)
     {
         scanf("%d",&arr[i]);
     }
     printf("Array before deletion:");  //Print original array before deletion.
      for(i=0;i<num;i++)
      {
         printf("%d ",arr[i]);
      }
      printf("\nEnter the position:");
      scanf("%d",&pos);

       if(pos>= num+1)
       {
        printf(" \n Deletion is not possible in the array.");  //Condition.
       }
       else
       {

        for(i=pos-1;i<num-1;i++)  // use for loop to delete the element and update the index
        {
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]
        }

        printf(" \nThe resultant array is: \n\n");


        for(i=0;i<num-1;i++)  // display the final array
        {
            printf(" arr[%d] = ", i);
            printf(" %d \n", arr[i]);
        }
    }


}
