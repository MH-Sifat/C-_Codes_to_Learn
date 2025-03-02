//For
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<10; i++)
    {
        cout << "Anik: " << i << endl;
    }
}*/



//While
/*#include<iostream>
using namespace std;
int main()
{
    int i=5;
    while(i<5)
    {
        cout << "Anik: " << i << endl;
        i++;
    }
}*/



//Do-While
/*#include<iostream>
using namespace std;
int main()
{
    int i=5;
    do
    {
        cout << "Anik: " << i << endl;
        i++;
    }
    while(i<5);
}*/



//Infinite for
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<10;)
    {
        cout << "Anik: " << i << endl;
    }
}*/



//Infinite for
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0; ; i++)
    {
        cout << "Anik: " << i << endl;
    }
}*/



//Infinite for
/*#include<iostream>
using namespace std;
int main()
{
    for(; ;)
    {
        cout << "Anik: " << endl;
    }
}*/



//Series sum
/*#include<iostream>
using namespace std;
int main()
{
    int num, value=0;
    cout << "Enter the end range: ";
    cin >> num;
    for(int i=0; i<num; i++)
    {
        value = value+i;
        cout << value <<endl;
    }
    cout << "Result: " << value;
}
*/


//Factorial
/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int fac=1;

    for(int i=a; i>0; i--)
    {
        fac = fac*i;
        cout <<  fac <<endl;
    }
    cout << fac;
} */




//Reverse number
/*#include <iostream>
using namespace std;
int main ()
{
    int number, right_digit;
    cout<<"Enter your number"<<endl;
    cin>>number;

    while(number!=0)
    {
        right_digit = number%10;
        cout<< right_digit;
        number = number/10;
    }
    return 0;
}*/


/*
//Continue, Break
#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<10; i++)
    {
        if(i<=4)
        {
           // break;
            continue;
        }
        cout << "Anik: " << i << endl;
    }
}*/
