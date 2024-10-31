#include"Stack.h"

void Creatstack(Stack *ps){
    ps->top=0;
}

void Push (StackEntry element , Stack *ps){
    ps->entry[ps->top++]=element;
}

int StackFull(Stack *ps){
    return ps->top >=MaxStack;
}

void Pop (StackEntry * pe , Stack *ps){
    *pe=ps->entry[--ps->top];
}

int StackEmpty(Stack *ps){
    return  ps->top==0 ;
}

void StackTop(StackEntry *pe,Stack *ps){
    *pe=ps->entry[ps->top-1];
}

void ClearStack(Stack *ps){
    ps->top=0;
}

int StackSize(Stack *ps){
    return ps->top;
}

void TraverseStack(Stack *ps , void (*pf) (StackEntry)){
        for( int i = ps->top ; i>0 ;i--){
            (*pf)(ps->entry[i-1]);
        }    
}
