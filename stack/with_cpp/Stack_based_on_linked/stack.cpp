#include "stack.h"
#include "stdlib.h"

stack::stack():size(0),top(NULL) {

}


void stack::Push(int e) {
    StackNode * pn=(StackNode*)malloc(sizeof(StackNode));
    pn->element=e;
    pn->next=top;
    top=pn;
    size++;
}

int stack::StackFull() {
    return 0;
}

StackEntry stack::Pop() {
    StackNode* temp=top;
    StackEntry e;
    e=temp->element;
    top=temp->next;
    free(temp);
    size--;
    return e;
}

int stack::StackEmpty() {
    return  top==NULL ;
}

StackEntry stack::StackTop() {
    return top->element;
}

void stack::ClearStack() {
    StackNode *pn=top;
    while(pn){
        top=pn->next;
        free(pn);
        pn=top;
    }
    size=0;
}

int stack::StackSize() {
    return size;
}

void stack::TraverseStack(void (*pf)(int)) {
    StackNode *current = top;
    while (current) {
        (*pf)(current->element);
        current = current->next;
    }
}

