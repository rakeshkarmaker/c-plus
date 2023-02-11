/*
Linked List in C/C++ - Inserting a node at beginning
*/
#include <stdio.h>
#include <stdlib.h>
struct Node{//so far we have created an the data type.
   int data;
   struct Node* next;

};

struct Node* insertBeginning(struct Node* head,int val){
    struct Node* temp = malloc((sizeof(struct Node)));
    (*temp).data = val;
    // temp -> next = NULL; CASE 1: when the head is NULL
   // if(head != NULL)temp -> next = head; CASE 2: when the head is NOT NULL
    temp -> next = head; //covers both case automatically
    head = temp;
    
}

void display(struct Node* head){

    printf("The List is:\t");

    while(head != NULL){
        printf("%d \t",head -> data);
        head = head -> next;  
    }
    printf("\n");
}

int main(){
    struct Node* head;
    head = NULL;  //so far we have created an empty node.
    printf("How many numbers you wish to insert? \n");
    int n,val;
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++){
        printf("Enter the value here:\n");
        scanf("%d",&val);

    // Asking the insert function to return the address of the head
        head = insertBeginning(head,val); 
        display(head);

    }

return 0;
}