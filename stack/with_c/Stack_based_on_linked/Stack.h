
#include"stdlib.h"

#define StackEntry int

typedef struct stacknode{
         StackEntry element;
         struct stacknode * next;
}StackNode;

typedef struct stack
{
        int size;
        struct stacknode *top;
}Stack;
         

// Function to stack
void Creatstack(Stack *ps);

void Push (StackEntry element , Stack *ps);

int StackFull(Stack *ps);

void Pop (StackEntry * pe , Stack *ps);

int StackEmpty(Stack *ps);

void StackTop(StackEntry *pe,Stack *ps);

void ClearStack(Stack *ps);

int StackSize(Stack *ps);

void StackTop(StackEntry *pe,Stack *ps);

void Display(StackEntry e);

void TraverseStack(Stack *ps , void (*pf) (StackEntry));
