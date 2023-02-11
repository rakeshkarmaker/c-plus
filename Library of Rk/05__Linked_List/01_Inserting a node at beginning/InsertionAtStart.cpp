/*
Linked List in C/C++ - Inserting a node at beginning
*/
#include <iostream>
using namespace std;

struct Node{//so far we have created an the data type.
   int data;
   Node* next;

};
Node* head;

void insertBeginning(int val){
    Node* temp = new Node();
    temp -> data = val;
    // temp -> next = NULL; CASE 1: when the head is NULL
   // if(head != NULL)temp -> next = head; CASE 2: when the head is NOT NULL
    temp -> next = head; //covers both case automatically
    head = temp;
    
}

void display(){
    Node* temp1 = head;
    cout<<"The List is:\t";

    while(temp1 != NULL){
        cout<<temp1 -> data<<"\t";
        temp1 = temp1 -> next;  
    }
    cout<<endl;
}
int main(){
    head = NULL;  //so far we have created an empty node.
    cout<<"How many numbers you wish to insert? \n";
    int n,val;
    cin>>n;
    
    for (int i = 0; i < n; i++){
        cout<<"Enter the value of "<<i+1<<"th number here:\n";
        cin>>val;
        insertBeginning(val);
        display();

    }
    
return 0; 
}