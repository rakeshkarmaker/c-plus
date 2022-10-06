// // D. A five-digit number is entered through the keyboard. Write a program to obtain the
// // reversed number and to determine whether the original and reversed numbers are equal
// // or not. (if-else and ternary operator)
// #include <iostream>

// using namespace std;

// int main()
// {
//     int d1, d2, d3, d4, d5, number, rev;
//     cout << "input all the number" << endl;
//     cin >> number;
//     d1 = (number / 10000);
//     d2 = (number / 1000) % 10;
//     d3 = (number / 100) % 10;
//     d4 = (number / 10) % 10;
//     d5 = (number % 10);

//     cout << d5 << endl
//          << d4 << endl
//          << d3 << endl
//          << d2 << endl
//          << d1 << endl;
//     rev = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1 * 1;

//     if (rev = number)
//     {
//         cout << "The reverse is same of original number";
//     }
//     else
//     {
//         cout << "The reverse is not same of original number" << endl;
//     }
//     //(reversed=number)?  cout<<"The reverse is same of original number" :cout<<"The reverse is not same of original number"<<endl;

//     return 0;
// }

// Alternative

#include <iostream>
using namespace std;

int main()
{
    int number, n, i, a = 1, b = 0, flag=0;
    cout << "Enter the elements and number in the array: ";
    cin >> n >> number;
    int arr[n - 1], rev[n - 1];
    for (int i = 0; i < n; i++)
    {
        arr[i] = (number / a) % 10;
        a = a * 10;
        cout << arr[i];
    }
    for (int i = n - 1; i = 0; i--)
    {
        rev[b] = arr[i];
        cout << rev[b];
        b++;
    }
    for (int i = 0; i < n; i++){
                
        cout<<arr[i]<<"\t"<<rev[i]<<endl;
        flag++;
        
        }
    if (flag == 5)
    {
        cout <<flag<< "\n Both the numbers are equal" << endl;
    }
    else
        cout <<flag<<  "\n Both the numbers are not equal" << endl;
    return 0;
}
