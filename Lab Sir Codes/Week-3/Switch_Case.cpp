//Expression
/*#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter the operation you want to perform: ";
    cin >> operation;

    cout << endl << endl;
    switch(operation)
    {
        case '+':
            cout << num1 << "+" << num2 << " = " << num1+num2;
            break;
        case '-':
            cout << num1 << "-" << num2 << " = " << num1-num2;
            break;
        case '*':
            cout << num1 << "*" << num2 << " = " << num1*num2;
            break;
        case '/':
            cout << num1 << "/" << num2 << " = " << num1/num2;
            break;
    }
}*/


//Expression with ASCII values
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter the operation you want to perform: ";
    cin >> operation;

    cout << endl << endl;
    switch(operation)
    {
        case 43:
            cout << num1 << "+" << num2 << " = " << num1+num2;
            break;
        case 45:
            cout << num1 << "-" << num2 << " = " << num1-num2;
            break;
        case 42:
            cout << num1 << "*" << num2 << " = " << num1*num2;
            break;
        case 47:
            cout << num1 << "/" << num2 << " = " << num1/num2;
            break;
    }
}

