/*
List In C++ STL | C++ Tutorials for Beginners #72
*/

#include <iostream>
#include<list>
using namespace std;

void display(list<int> &obj){

    list<int> :: iterator iter;

    for (iter = obj.begin(); iter != obj.end() ; iter++)
    {//starts from the begig and ends at the end by pointing the iterator from the begin() method reference to the end() methord reference 
        
        cout<<*iter<<"\t";
    }
    cout<< endl;

}
 
int main(){

    list<int> list1; //list of 0 length

    list1.push_back(11);
    list1.push_back(22);
    list1.push_back(33);
    list1.push_back(44);
    list1.push_back(55);
    list1.push_back(66);

/*
    list<int> :: iterator iter; //Making an iterator
    iter = list1.begin(); //The iterator will point toward the first element of the list1
    // list.begin() is a reference to the first element of the list.
*/  
    display(list1);


    list<int> list2(4); //Empty list of size 7

    list<int> :: iterator iter1;
    iter1 = list2.begin();
    *iter1 =61;
    iter1++;
    *iter1 =92;
    iter1++;
    *iter1 =53;
    iter1++;
    *iter1 =44;

    iter1++; //after increment it will point towward a memory that  does not exist
    *iter1 =4; // value will be initialized but not stored as the memore does not exists due to not allocating memory


    display(list2);

    //Deleting a list

    list1.pop_back();   //will delete last element
    display(list1);

    list1.pop_back();   //will delete 2nd last element
    display(list1);

    list1.pop_front();  //will delete  the first element
    display(list1);

    list1.remove(33);    //Removes the given element value in the parameter
    display(list1);

    //Sorting a list
    list2.sort();
    cout<<"Sorting a list:"<<endl;
    display(list2);

    //Reversing a list
    list2.reverse();
    cout<<"Reversing a list:"<<endl;
    display(list2);



    return 0;
}