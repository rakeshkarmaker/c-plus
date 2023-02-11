/*
Using Linked List and making a CMD Code
*/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head; // defined as a global

void insertAtBeginning(int val);
void InsertAtEnd(int data);
void insertAtnth(int data, int pos);
void DeleteNode(int n);
void MoveNode(int val,int pos);
int SearchNode(int val);
void Print();


void insertAtBeginning(int val){
    Node* temp = new Node();
    temp -> data = val;
    // temp -> next = NULL; CASE 1: when the head is NULL
   // if(head != NULL)temp -> next = head; CASE 2: when the head is NOT NULL
    temp -> next = head; //covers both case automatically
    head = temp;
    
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

void DeleteNode(int pos){
    Node* temp1 = head;

    if(pos ==1){//Deleting the head node
        head = temp1 -> next;
        delete temp1;
        return;
    }
    for(int i = 0;i<pos-2;i++){//perform delete operation of upto (n-1) th position minus head
        temp1 = temp1 -> next;
        }//temp1 point to (n-1)th node
        
        Node* temp2 = temp1 ->next; // nth node 

        temp1 -> next = temp2 -> next; // pointing the n-1 th to n+1 and skipping nth element.
        //free(temp2); //delete temp2 in c programming
        delete temp2;
    
}
void MoveNode(int val,int pos){
    int currPos = SearchNode(val);
    if(currPos != -1){
        DeleteNode(currPos);
        insertAtnth(val,pos);
    }

}
int SearchNode(int val){
    Node* temp1 = head;
    int pos = 0;

    while(temp1 != NULL){
        if(temp1->data == val) return pos;
        temp1 = temp1 -> next;
        pos++;
    }
    return -1;
}

void Print(){
    Node* temp1 = head;
    cout<<"The List is:\t[";

    while(temp1 != NULL){
        cout<<temp1 -> data<<"\t";
        temp1 = temp1 -> next;  
    }
    cout<<"]"<<endl;
}

int main(){
    head = NULL; // Empty list;

    int flag = 0,input,pos,val;


    while(flag == 0){
        cout<<"Type your action: "<<endl;
        cout<<"1. Insert a Node.\n"<<"2. Move a node.\n"<<"3. Search a Node.\n"<<"4. Remove a Node.\n"<<"5. Display/Print the node.\n"<<"6. Exit the program.\n"<<"Input => ";
        cin>>input;
        
        switch (input){
            
        case 1:
            cout<<"1. Insert a node at the Beginning."<<endl<<"2. Insert a node  at the End."<<endl<<"Insert a node  at the Nth (Any) Position."<<endl<<"Input => ";
            cin>>input;
            switch (input){

            case 1:
                cout<<"Type value to insert:\n";
                cin>>val;
                insertAtBeginning(val);
                break;
            case 2:
                cout<<"Type value to insert:\n";
                cin>>val;
                insertAtEnd(val);
                break;
            case 3:
                cout<<"Type value to insert:\n";
                cin>>val;
                cout<<"Type at which position you want to insert:\n";
                cin>>pos;
                insertAtnth(val,pos);
                break;
            case 4:
                break;
            default:
                break;
            }
            
            break;
        
        case 2:
            cout<<"Type the value:\n";
            cin>>val;
            cout<<"Type the position you want to move:\n";
            cin>>pos;
            MoveNode(val,pos);
            break;
        case 3:
            cout<<"Type the value to search:\n";
            cin>>val;
            if(SearchNode(val)== -1){
                cout<<val<<" was not found in the Node.\n";

            }else{
                cout<<val<<" was  found in the Node.\n";

            }
            break;
        
        case 4:
            cout<<"Type the position you want to remove:\n";
            cin>>pos;
            DeleteNode(pos);            
            break;
        case 5:
            Print();
            break;
        case 6:
            flag++;
            break;     
        default:
            break;
        }
    }

    return 0;
}