// #include <conio.h>
#include <stdio.h>
#define MAX 5
int top = -1;
int stack[MAX] ;
void main()
{
    int choise;
    while(choise!=0)
    printf("Enter 1 to push");
    printf("Enter 2 to pop");
    printf("Enter 3 to display");
    printf("Enter 0 to exit");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 0:
        break;

    default:
        printf("Wrong choise");
        break;
    }
}

void push()
{
    int number;
    if (top == MAX)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter the number that you want to push to the stack");
        scanf("%d", &number);
        stack[top + 1] = number;
        top = top + 1;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        top = top - 1;
    }
}

void display()
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf(stack[i]);
    }
}