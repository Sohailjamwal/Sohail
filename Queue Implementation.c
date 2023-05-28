#include<stdio.h>
#define CAPACITY 15
int queue[CAPACITY];
int front=0;
int rear=0;
void enqueue()
{
    if(rear==CAPACITY)
    {
        printf("Overflow.");
    }
    else
    {
        int x;
        printf("Enter the number:");
        scanf("%d",&x);
        queue[rear]=x;
        rear++;
    }
}
void show()
{
    if(rear==front)
    {
        printf("Underflow");
    }
    else
    {
        int i;
        for(i=front;i<rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}
void dequeue()
{

    if(front==rear)
    {
        printf("Underflow");
        return;

    }
    else
    {
        printf("Element deleted from queue is: %d\n", queue);
        front=front+1;
    }
}
void main()
{
    int opt,x,con=1;
    while(con)
    {
	printf("\n                                                     **WELCOME**\n\n");
	printf("1.Enqueue\n2.Show\n3.Dequeue");
	printf("\nWhat you want to do ?\n\n");
	scanf("%d",&opt);
	switch (opt)
	{
    case 1:
        {
            printf("The element you want to enqueue:\n\n");
            //scanf("%d",&x);
            enqueue(x);
            break;
        }
    case 2:
        {
          show();
          break;
        }
    case 3:
        {
          dequeue();
          break;
        }
    default:
        {
            printf("INVALID CHOICE");
        }
	}
    printf("\nPress 0 for exit ,1 for continue");
    scanf("%d",&con);
}
}
