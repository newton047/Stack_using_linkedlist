#include "stack_ll.h"




/*This function will interate through linked list to find the length*/
uint8_t GetStackSize(Stack_t* Stack,uint32_t* capacity)    /*Get current stack size*/
{
    Stack_t* temp;
    uint32_t count=0;
    /*Stack is empty*/
   if(Stack==NULL){
    *capacity=0;
    return NO_ERROR ;    /*Return as zero*/
   }


   temp = Stack;
   /*Counter till the last node is not hit*/
   while(temp!=NULL)    {

    count++;
    temp=temp->next;

   }

   *capacity = count;



    return NO_ERROR;
}




uint8_t StackPop(Stack_t** Stack,uint8_t *data)             /*Pop from stack*/
{


    Stack_t* todelete;
    /*Stack was empty*/
    if(*Stack==NULL)
        return STACK_EMPTY;

    *data =(*Stack)->data;                          /*Pooping the stack*/
    todelete = Stack;                          /*Address of top of stack*/
    *Stack= (*Stack)->next;                        /*Updating the Stack pointer*/

    free(todelete);                            /*Free the stack*/


    //Stack->top--;
    return NO_ERROR;

}
uint8_t StackPush(Stack_t** Stack,uint8_t  data)           /* Push inside of stack*/
{


    Stack_t* toadd;

    toadd =(Stack_t*) malloc(sizeof(Stack_t));           /*allocating space for the data*/

    toadd->data = data;                                /*Push data to stack*/

    /*First node is being added*/
    if(*Stack ==NULL)    {


        toadd->next =NULL;                             /*Next is null*/
    }
    else {
    toadd->next = *Stack;                                /*Pointing to next stack*/

    }
    *Stack =toadd;                                       /*Updating the stack variable*/




    return NO_ERROR ;                                       /*Stack as sucessfully filled*/


}
uint8_t StackPeek(Stack_t* Stack,uint8_t *data)             /*See the data at the top of stack*/
{
   *data=Stack->data;                                       /*Data at the top*/
    return NO_ERROR;

}


