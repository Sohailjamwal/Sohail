//Program to update the element in the array.
#include<stdio.h>
int main()
{
  int i,pos,a[10],n,m,new,j=0,b[10]; //Declaration.
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the elements in the array:\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);    //User input.
   }
  printf("\nGiven values are:\n");
   for(i=0;i<n;i++)
   {
    printf("a[%d]=%d ",i,a[i]);  //Print array before updation.
    printf("\n");
   }
  printf("\nEnter the position to be update:");  //Position of value for updation.
  scanf("%d",&pos);
  printf("Enter the updated value:");
  scanf("%d",&new);
   for(i=0;i<n;i++)
   {
    if(i==pos)
    {
       a[i]=new;       //Condition.
    }
   }
  printf("\nUpdated value is:");
   for(i=0;i<n;i++)
   {
    printf("\na[%d]=%d",i,a[i]);   //Print array after updation.
   }
  return 0;
}
