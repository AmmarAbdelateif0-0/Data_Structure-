//
// Created by aboam on 10/31/2024.
//

#ifndef OOP_PROJECT_STACK_H
#define OOP_PROJECT_STACK_H

#define StackEntry int

class stack {
private:
    typedef struct stacknode{
        StackEntry element;
        struct stacknode * next;
    }StackNode;
    int size;
    struct stacknode * top;
public:


    void Push (StackEntry e);

    int StackFull();

    StackEntry Pop ();

    int StackEmpty();

    StackEntry StackTop();

    void ClearStack();

    int StackSize();

    void TraverseStack( void (*pf) (StackEntry));

    stack();

};


#endif //OOP_PROJECT_STACK_H
