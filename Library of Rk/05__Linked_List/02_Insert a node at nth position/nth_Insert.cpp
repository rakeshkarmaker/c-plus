/*

*/
#include <iostream>
using namespace std;


struct Node{//so far we have created an the data type.
   int data;
   Node* next;

};
Node* head;

void insertAtnth(int data, int pos){
    Node* temp1 = new Node();
    temp1 -> data = data;
    temp1 -> next = NULL;

    if(pos ==1){
        temp1 -> next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0;i<pos-2;i++){
        temp2 = temp2 -> next;

    }
    temp1 -> next = temp2 -> next;
    temp2-> next = temp1;
}

void insertAtEnd(int val){
    Node* temp = new Node();
    temp -> data = val;
    temp -> next = NULL;
    if(head ==NULL){
        head = temp;
        return;
    }
    
    Node* temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1 -> next;  
    }
    temp1 ->next = temp;
    
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

    head = NULL;
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);
    insertAtEnd(4);
    display();

return 0;
}