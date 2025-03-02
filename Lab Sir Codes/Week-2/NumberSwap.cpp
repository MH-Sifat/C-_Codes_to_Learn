#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << endl << endl << "*** Numbers before swapping ***" << endl;
    cout << "First number = " << num1 << " and second number = " << num2;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << endl << endl << "*** Numbers after swapping ***" << endl;
    cout << "First number = " << num1 << " and second number = " << num2;

    return 0;
}
