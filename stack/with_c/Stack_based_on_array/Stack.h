
#define StackEntry int
#define MaxStack   10
// Stack 
typedef struct stack
{
    StackEntry entry[MaxStack];
    int top ;
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
