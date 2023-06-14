#include <stdio.h>
#include <conio.h>

int choice, x, n,top;
int size;
int i;
void display(void);
void push(void);
void pop(void);
int stack[100];

int main()
{
 top =-1;

    printf("Enter the size of the stack:\n");
    scanf("%d", &size);
    printf("The operations on the stack are:\n");
    printf("1.Push/n 2.Pop/n 3.Display\n 4.Exit\n");

    do
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exit Point");
            break;
        }
        default:
        {
            printf("Please enter a valid choice:\n");
        }
        }
    } while (choice != 4);
    return 0;
}

void push()
{
    if (top >= size- 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter a value to be pushed:\n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("The popped element is %d", stack[top]);
        top--;
    }
}

void display()
{
    
    if (top>= 0)
    {
        printf("The displayed elements are:\n");

        for (i = top; i >=0; i--)
            printf(" \n%d", stack[i]);
    }
    else
    {
        printf("The stack is empty");
    }
}