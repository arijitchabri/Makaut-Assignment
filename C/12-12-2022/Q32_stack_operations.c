// C program to implement Stack operations

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 1000

int top = -1;

int stack[N];

// Stack operations prototypes
void push();
int pop();
int peek();
bool isEmpty();
bool isFull();
void displayElements();

int main()
{
    printf("STATIC ARRAY (Total Capacity: %d)\n", N);
    int choice;

    while (1)
    {
        printf("\nChoose any of the following options:\n");
        printf("0: Exit\n1: Push\n2: Pop\n3: Peak\n4: Check if the stack is empty\n5: Check if the stack is full\n6: Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        case 6:
            displayElements();
            break;
        default:
            printf("Please choose a correct option!");
        }
    }
    return 0;
}
void push()
{
    if (top == N - 1)
        printf("Overflow State: can't add more elements into the stack\n");
    else
    {
        int x;
        printf("Enter element to be pushed into the stack: ");
        scanf("%d", &x);
        top += 1;
        stack[top] = x;
    }
}

int pop()
{
    if (top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else
    {
        int x = stack[top];
        printf("Popping %d out of the stack\n", x);
        top -= 1;
        return x;
    }
    return -1;
}

int peek()
{
    int x = stack[top];
    printf("%d is the top most element of the stack\n", x);
    return x;
}

bool isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
    return false;
}

bool isFull()
{
    if (top == N - 1)
    {
        printf("Stack is full: Overflow State\n");
        return true;
    }
    printf("Stack is not full\n");
    return false;
}

void displayElements()
{
    int i;
    printf("Elements in the stack: ");
    for (i = 0; i <= top; i++)
        printf("%d, ", stack[i]);
}