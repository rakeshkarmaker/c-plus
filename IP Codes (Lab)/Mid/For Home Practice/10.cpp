#include <iostream>
using namespace std;
int main()
{
    int num1, num2, r, sum=0;
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    while (num1 > 0)// while is recommended when we dont know the Number of looping steps
    {
        r = num1 % 10; //1230+4(r=4)
        num1 = num1 / 10; // 123/10 =123.4 but int only show integers
        sum = sum + r;
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
    return 0;
}