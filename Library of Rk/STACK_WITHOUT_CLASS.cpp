/*2. (a) Define STACK and its operation PUSH and POP for the following scenario. STACK maxsize = 6. Illustrate the following steps. 

Push(2); 
Push(3); 
Push(5); 
Pop(); 
Push(1); 
Pop(); 
Push(8); 
Push(4); 
Pop(); 
Pop(); 
Pop();
*/
#include <iostream>
using namespace std;

int stack[100];

int top = 0, maximum = 50;

bool isEmpty (){
    if(top == 0){
            cout<<"The stack is empty"<<endl;
        return true;
    }else{
        cout<<"The stack is not empty"<<endl;
        return false;
    }
}
bool isFull (){
    if(top == maximum){
        cout<<"The stack is Full"<<endl;
        return true;
    }else{
        cout<<"The stack is not Full"<<endl;
        return false;
    }
}
bool push(int x){ // if(top == maximum){

    if(isFull()){
            cout<<"Cannot insert. The stack is Full"<<endl;
            return false;
            cout<<"the pushed element is :"<<stack[top-1]<<endl;
    }else{
    stack [top++] = x;  // will initialize value and then post-incriment the value of top
    //top++; // an alternative
    cout<<"Element Inserted \n";
    return true;
    }
}

bool pop(){
    if(isEmpty()){
            return false;
    }else{
        cout<<"Element poped\n";
        cout<<":The poped element is : "<<stack[top--]<<endl;
         return true;

    }

}
void topElement(){
    if(top == 0){
        cout<<"Stack is empty\n";

    }else{
        cout<<":the top element is : "<<stack[top-1]<<endl;
    }

}

//we will print the stack in the reverse order in order to print it in  the proper order. other wise it will normally print in reverse.
void show(){
    for(int i = top-1; i >= 0 ; i--){
        cout<<stack[i]<<endl;
    }
}


int main (){

isEmpty ();
isFull();
push(1);
push(2);
push(3);
pop();
isEmpty ();
show();

return 0;
}
