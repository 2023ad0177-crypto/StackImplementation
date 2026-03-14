#include <stdio.h>

int stack[5];
int top = -1;

void push()
{
    int x;
    printf("Enter a value to push: ");
    scanf("%d", &x);

    if(top == 5-1)
    {
        printf("Overflow condition\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Underflow condition\n");
    }
    else
    {
        printf("Popped element is: %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is: %d\n", stack[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int ch;

    do
    {
        printf("\nEnter a choice:\n");
        printf("1 -> PUSH\n2 -> POP\n3 -> PEEK\n4 -> DISPLAY\n0 -> EXIT\n");

        scanf("%d", &ch);

        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    } while(ch != 0);

    return 0;
}