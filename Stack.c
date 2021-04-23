#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int capacity;
    int top;
    int *ptr;
} Stack;

Stack * createStack(int);
void push(Stack*, int);
int pop(Stack *);
int peek(Stack *);
int countItems(Stack *);
int isFull(Stack*);
int isEmpty(Stack*);

int isEmpty(Stack *stack)
{
    return (stack->top == -1) ? 1: 0;
}

int isFull(Stack *stack)
{
    return stack->top + 1 == stack->capacity ? 1: 0;
}

int countItems(Stack *stack)
{
    return stack->top + 1;
}


void push(Stack *stack, int item)
{
    if(stack->top + 1 == stack->capacity)
        printf("Overflow");
    else
    {
        stack->top += 1;
        stack->ptr[stack->top] = item;
    }
}

int pop(Stack *stack)
{
    int item = -1;

    if(stack->top == -1)
    {
        printf("Underflow");
        return item;
    }
    else
    {
        item = stack->ptr[stack->top];
        stack->top -= 1;
    }
    return item;
}

int peek(Stack *stack)
{
    return stack->top == -1 ? -1 : stack->ptr[stack->top];
}

Stack * createStack(int cap)
{
    Stack *s = (Stack*)malloc(sizeof(Stack));
    s->capacity = cap;
    s->top = -1;
    s->ptr = (int*)malloc(sizeof(int) * cap);
    return s;
}

