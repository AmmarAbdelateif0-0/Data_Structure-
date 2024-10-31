#include"Stack.h"

void Creatstack(Stack *ps){
    ps->top=NULL;
    ps->top=0;
}

void Push (StackEntry e , Stack *ps){
    StackNode * pn=(StackNode*)malloc(sizeof(StackNode));
    pn->element=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}

int StackFull(Stack *ps){
    return 0;
}

void Pop (StackEntry * pe , Stack *ps){
    StackNode* temp=ps->top;
    *pe=ps->top->element;
    ps->top=ps->top->next;
    free(temp);
    ps->size--;
    
}

int StackEmpty(Stack *ps){
    return  ps->top==NULL ;
}

void StackTop(StackEntry *pe,Stack *ps){
    *pe= ps->top->element;
}

void ClearStack(Stack *ps){
    StackNode *pn=ps->top;
    while(pn){
        pn=pn->next;
        free(ps->top);
        ps->top=pn;
    }
    ps->size=0;
}

int StackSize(Stack *ps){
    return ps->size;
}

void TraverseStack(Stack *ps , void (*pf) (StackEntry)){
      StackNode *current = ps->top;
        while (current) {
            (*pf)(current->element);
            current = current->next;
        }
}


