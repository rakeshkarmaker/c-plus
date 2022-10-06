#include <iostream>
using namespace std;

 

class A{

 

    public:

 

    A()
    {
        cout<<"Constructor of Class A"<<endl;
    }

 

    ~A()
    {
        cout<<"Destructor of Class A"<<endl;
    }

 

    void ShowData()
    {
        cout<<"Some data of class A"<<endl;
        A obj;
    }

 

};

 

class B: public A{

 

    public:

 

    B()
    {
        cout<<"Constructor of Class B"<<endl;
    }

 

    ~B()
    {
        cout<<"Destructor of Class B"<<endl;
    }

 

    void ShowData()
    {
        cout<<"Some data of class B"<<endl;

 

        A obj1;
        obj1.ShowData();
    }

 

};

 

int main()
{
    A obj;
    B obj1;
    obj1.ShowData();
    obj.ShowData();

 

}
// /*

// */
// #include <iostream>
// using namespace std;

// Class Course{
//     int quiz,ass,viva,exam;
// };
// class Quiz: private Course{
//     public:
//     Quiz(int a){
//         quiz = (a/50)*30;

//     }
// };

// class Ass: private Course{
//     public:
//     ass(int a){
//      ass = (a/20)*10;

//     }
// };

// class Viva: private Course{
//       public:
//      Viva(int a){
//      viva = (a/50)*25;
//     }
// };
// class Exam: private Course{
//     public:
//     Exam(int a){
//      exam = (a/100)*35;
    
//     }:
// };


// int main(){

// return 0;
// }



// #include<iostream>
// using namespace std;

// class Employee{
// protected:
//     int employeeId;
//     string employeeName;
//     double salary;

// public:
//     void setValueEI(int ei){
//         employeeId=ei;
//     }
//     int getValueEI(){
//         return employeeId;
//     }
//     void setValueEN(string en){
//         employeeName=en;
//     }
//     string getValueEN(){
//         return employeeName;
//     }
//     void setV(double s){
//         salary=s;
//     }
//     double getV(){
//         return salary;
//     }
//     Employee(){
//         cout<<"Empty constractor for Employee"<<endl;
//     }

//     Employee(int ei, string en, double s ){
//         cout<<"Parameterized constractor for Employee"<<endl;
//         employeeId=ei;
//         employeeName=en;
//         salary=s;
//     }

//     ~Employee(){
//     cout<<"This is Destructor for Employee"<<endl;
//     }

//     void showEmployeeDetails(){
//     cout<<"Employee Id : "<<employeeId<<endl;
//     cout<<"Employee Name : "<<employeeName<<endl;
//     cout<<"Employee salary : "<<salary<<endl;
//     }
// };
// class Salesman: public Employee{
// private:
//     string  salesArea;
//     string  productName;
//     int  managerID;
// public:
//     Salesman(int ei, string en, double s, string sa , string pn , int mi):Employee(ei, en, s){
//     cout<<"this is constructor for salesman "<<endl;
//     salesArea=sa;
//     productName=pn;
//     managerID=mi;
//     }
//     ~Salesman(){
//         cout<<"This is destructor for salesman "<<endl;
//     }
//     void showSalesmanDetails(){
//     Employee::showEmployeeDetails();
//     cout<<"Sales area of Salesman : "<<salesArea<<endl;
//     cout<<"Product name of Salesman : "<<productName<<endl;
//     cout<<"Manager ID of Salesman : "<<managerID<<endl;
//     }
// };
// class Manager: public Employee{
// private:
//     string territoryName;
// public:
//     Manager(int ei, string en, double s, string tn):Employee(ei, en, s){
//         cout<<"This is constructor for Manager"<<endl;
//         territoryName=tn;
//     }
//     ~Manager(){
//         cout<<"this is destructor for Manager"<<endl;
//     }
//     void showManagerDetails(){
//         Employee::showEmployeeDetails();
//         cout<<"Territory Name : "<<territoryName<<endl;
//     }
//     void incrementSalary(Salesman *salesman,double amount)
//     {
//         double currentSalary = salesman->getV();
//         double newSalary = currentSalary + amount;
//         salesman->setV(newSalary);
//     }
// };

// int main(){
//     Manager Rafsan(2246708, "Rafsan", 65500, "Chadpur");
//     Rafsan.showManagerDetails();
//     cout<<endl;
//     Salesman Abdullah(224668, "Abdullah", 23000, "Cumilla", "Instruments", 223424 );
//     Abdullah.showSalesmanDetails();
//     cout<<endl;
//     cout<<"After incrementing salary"<<endl;
//     Rafsan.incrementSalary(&Abdullah, 1000);
//     Abdullah.showSalesmanDetails();
//     cout<<endl;
// }










// #include <iostream>
 
// using namespace std;
 
// int main() {
 
//     float value;
//     cin>>value;
//     if(value>=0 && value <=25){
//         cout<<"Intervalo [0,25]"<<endl;
//     }
//     else if(value>25 && value <=50){
//         cout<<"Intervalo (25,50]"<<endl;
//     }
//     else if(value>50 && value <=75){
//         cout<<"Intervalo (50,75]"<<endl;
//     }

//     else if(value>75 && value <=100){
//          cout<<"Intervalo (75,100]"<<endl;
//     }
//     else{
//         cout<<"Fora de intervalo"<<endl;
//     }
//     return 0;
// }

// /*
// quiz two
// */
// #include <iostream>
// using namespace std;

// class A {
//     public:
//     A (){
//         cout<<"Constructor of A"<<endl;
//     }
//     ~A (){
//         cout<<"destructor of A"<<endl;
//     }

//       void Get_Display(){
//         cout<<"We are looking at A"<<endl;
//         A obj1();
//     }
// };


// class B : public A {
//     public:
//     B (){
//         cout<<"Constructor of B"<<endl;
//     }
//     ~B (){
//         cout<<"destructor of B"<<endl;
//     }
//     void Get_Display(){
//         cout<<"We are looking at B"<<endl;
//         A obj;
//         obj.Get_Display(); 
//     }
// };




// int main(){
// B obj1;
// A obj;
// obj1.Get_Display();
// obj.Get_Display();
// return 0;
// }