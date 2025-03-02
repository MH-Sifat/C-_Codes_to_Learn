//Absolute value
/*
#include<iostream>
using namespace std;
int main()
{
    int value;
    cout << "Enter a value: ";
    cin >> value;

    if(value<0)
    {
        value = -value;
    }
    cout << "The absolute value is: " << value;
    return 0;
}
*/


//Area Calculation
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout << "1) Circle" << endl;
    cout << "2) Square" << endl;
    cout << "3) Rectangle" << endl;
    cout << "4) Triangle" << endl << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << endl << endl;
        float radius, circle;
        cout << "Enter radius: ";
        cin >> radius;
        circle = 3.1416*radius*radius;
        cout << "Area of circle is: " << circle;
    }
    else if(choice == 2)
    {
        cout << endl << endl;
        float length, square;
        cout << "Enter length: ";
        cin >> length;
        square = length*length;
        cout << "Area of square is: " << square;
    }
    else if(choice == 3)
    {
        cout << endl << endl;
        float base, height, rectangle;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        rectangle = base*height;
        cout << "Area of rectangle is: " << rectangle;
    }
    else if(choice == 4)
    {
        cout << endl << endl;
        float base, height, triangle;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        triangle = 0.5*base*height;
        cout << "Area of trignale is: " << triangle;
    }
    else
    {
        cout << endl << endl;
        cout << "Invalid input";
    }
}



//Even Odd
/*#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if (num%2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}*/



//Even Odd Negative
/*#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    if(num >= 0)
    {
        if(num%2 == 0)
        {
            cout << "EVEN";
        }
        else
        {
            cout << "ODD";
        }
    }
    else
    {
        cout << "Number is negative";
    }
}*/



//Expressions
/*#include<iostream>
using namespace std;
int main()
{
    char op;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter the operation you want to perform: ";
    cin >> op;

    if(op == '+')
    {
        cout << num1 << "+" << num2 << " = " << num1+num2;
    }
    else if(op == '-')
    {
        cout << num1 << "-" << num2 << " = " << num1-num2;
    }
    else if(op == '*')
    {
        cout << num1 << "*" << num2 << " = " << num1*num2;
    }
    else if(op == '/')
    {
        cout << num1 << "/" << num2 << " = " << num1/num2;
    }
}*/



//Greatest number between 2 numbers
/*#include<iostream>
using namespace std;
int main()
{
    int num1, num2, maxValue;
    cin >> num1 >> num2;

    maxValue = (num1>num2) ? num1:num2;


    //if(num1>num2)
    //{
        //maxValue = num1;
    //}
    //else if(num2>num1)
    //{
        //maxValue = num2;
    //}


    cout << "Max value is: " << maxValue;
}*/


//Greatest number between 3 numbers
/*#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a>b)
    {
        if(a>c)
        {
            cout << a << " is the largest number";
        }
        else
        {
            cout << c << " is the largest number";
        }
    }
    else if(b>c)
    {
        cout << b << " is the largest number";
    }
    else
    {
        cout << c << " is the largest number";
    }
}*/



//Smallest number between 3 numbers
/*#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a<b)
    {
        if(a<c)
        {
            cout << a << " is the smallest number";
        }
        else
        {
            cout << c << " is the smallest number";
        }
    }
    else if(b<c)
    {
        cout << b << " is the smallest number";
    }
    else
    {
        cout << c << " is the smallest number";
    }
}*/


//Greatest number between 4 numbers
/*#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout << a << " is the largest number";
            }
            else
            {
                cout << d << " is the largest number";
            }
        }
        else if(c>d)
        {
            cout << c << " is the largest number";
        }
        else
        {
            cout << d << " is the largest number";
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            cout << b << " is the largest number";
        }
        else
        {
            cout << d << " is the largest number";
        }
    }
    else if(c>d)
    {
        cout << c << " is the largest number";
    }
    else
    {
        cout << d << " is the largest number";
    }
}*/



//Leap year
/*#include<iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
    {
        cout << "Leap year" ;
    }
    else
    {
        cout << "Not leap year";
    }
    return 0;
}*/

