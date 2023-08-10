#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"

int main()
{
    Stack_t* Stack=NULL;
    uint32_t capacity=7;   /*capacity of the stack*/
    uint32_t current_capacity;
    uint8_t temp;


    /*Push to the stack*/
    for(int i=0;i<2*capacity;i++) {

    StackPush(&Stack,i*5);

    }
    GetStackSize(Stack,&current_capacity);     /*Getting the current capacity*/
    StackPeek(Stack,&temp);
    printf("\nThe current capacity is %d ",current_capacity);
    printf("\nThe top element is %d",temp);

    //Popping all the elements
    for(int i=0;i<2*capacity;i++) {

            StackPop(&Stack,&temp);
            printf("\n popped element %d",temp);

    }

    GetStackSize(Stack,&current_capacity);     /*Getting the current capacity*/
    printf("\nThe current capacity is %d ",current_capacity);

    return 0;
}
