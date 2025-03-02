#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1+num2;
    int sub = num1-num2;
    int mul = num1*num2;
    int div = num1/num2;
    int mod = num1%num2;

    cout << "SUM = " << sum << endl;
    cout << "SUB = " << sub << endl;
    cout << "MUL = " << mul << endl;
    cout << "DIV = " << div << endl;
    cout << "MOD = " << mod << endl;
}

