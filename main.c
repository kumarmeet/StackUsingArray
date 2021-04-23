#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int capacity;
    int top;
    int *ptr;
} Stack;


int main()
{
    Stack *stack = NULL;
    stack = createStack(4);

    push(stack, 45);
    push(stack, 8);
    push(stack, 9);
    push(stack, 10);

    pop(stack);

    return 0;
}
