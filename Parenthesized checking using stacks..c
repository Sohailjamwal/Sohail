//Program to check if a given expression is correctly parenthesized using stacks.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

                    // function prototypes
void push(char);
void pop();
void find_top();

void main()
{
	int i;
	char array[100];
	printf("Enter any expression:\n");
	scanf("%s", &array);
	for (i = 0; array[i] != '\0';i++)
	{
		if (array[i] == '(')
		{
			push(array[i]);
		}
		else if (array[i] == ')')
		{
			pop();
		}
	}
	find_top();
}

                                 // Pushing in stack.
void push(char array)
{
	stack[top] = array;
	top++;
}

                                    // Poping in stack
void pop()
{
	if (top == -1)
	{
		printf("Expression is invalid\n");
		exit(0);
	}
	else
	{
		top--;
	}
}

                                       //Finding top element.
void find_top()
{
	if (top == -1)
		printf("\nExpression is valid\n");
    else
		printf("\nExpression is invalid\n");
}
