//#include<iostream>
//using namespace std;
//int main()

//{

// DATA Types int, float, double, char, bool
// Declare variable  DataType name; (example => int number;)

/*)
  // normal +,-,*,/,% with variable

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

*/


/*
// calculating expense with variable

    int FoodCost, TravelCost, OtherCost;
    cout << "Please enter your food cost for a day: ";
    cin >> FoodCost;
    cout << "Please enter your travel cost for a day: ";
    cin >> TravelCost;
    cout << "Please enter your other costs for a day: ";
    cin >> OtherCost;

    cout << endl << endl;

    cout << "Your total cost per day is " << (FoodCost+TravelCost+OtherCost) << " Taka." << endl;
    cout << "Your total cost per week is " << (FoodCost+TravelCost+OtherCost)*7 << " Taka." << endl;
    cout << "Your total cost per month is " << (FoodCost+TravelCost+OtherCost)*30 << " Taka." << endl;
    cout << "Your total cost per year is " << (FoodCost+TravelCost+OtherCost)*365 << " Taka." << endl;

    cout << endl ;

    int day, week, month, year;
    day = FoodCost+TravelCost+OtherCost ;
    week = day * 7;
    month = day * 30;
    year = day * 365;

    cout << "Your total cost per day is " << day << " Taka." << endl;
    cout << "Your total cost per week is " << week << " Taka." << endl;
    cout << "Your total cost per month is " << month << " Taka." << endl;
    cout << "Your total cost per year is " << year << " Taka." << endl;

*/



/*
// pre-increment & post-increment
    int a = 10;
    cout << a << endl;
    cout << a++ << endl; // a++ = a+1
    cout << a << endl;
    cout << ++a;
*/




/*

// value/num swaping

    int num1,num2,num3;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << endl << endl << "*** Numbers before swapping ***" << endl;
    cout << "First number = " << num1 << " and second number = " << num2;

    num3 = num1;
    num1 = num2;
    num2 = num3;

    cout << endl << endl << "*** Numbers after swapping ***" << endl;
    cout << "First number = " << num1 << " and second number = " << num2;

*/


/*
// type casting

      int a, b;

      cin >> a >> b;

      float result = (float)a/b;

      cout <<"result: " << result;
*/


// *** START using  If, else, else if ***


/*
    // even odd checking by if else

    int number_to_test, remainder;
    cout <<"Enter your number to be tested: " << endl;
    cin >> number_to_test;

    remainder = number_to_test % 2;

    if ( remainder == 0 )
     {
	 cout<<"The number is even"<<endl;
     }
    else{
	cout<<"The number is odd"<<endl;
    }
*/



/*

// even odd and negative num finding using if-else
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
*/



/*

   // leap year calculating with if else
    int year, rem_4, rem_100, rem_400;

    cout<<"Enter the year to be tested: "<<endl;

    cin>>year;

    rem_4 = year % 4;

    rem_100 = year % 100;

    rem_400 = year % 400;


    if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0 )
    {
        cout<<"It's a leap year."<<endl;
    }
    else{
      cout<<"It's not a leap year."<<endl;
     }
*/



/*

// calculate circle, square, rectangle, triangle using if-else
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
*/



/*
// finding largest num

    int a, b, c, largest;
    cout << "a: " ;
    cin >> a ;
    cout << "b: " ;
    cin >> b ;
    cout << "c: ";
    cin>> c ;

    if(a>b)
    {
        if(a>c)
        {
            cout << a << " is the largest number";
            largest = a;
        }
        else
        {
            cout << c << " is the largest number";
            largest = c;
        }
    }
    else if(b>c)
    {
        cout << b << " is the largest number";
        largest = b;
    }
    else
    {
        cout << c << " is the largest number";
        largest = c;
    }

    cout << endl;

    if(largest%2 == 0)
    {
        cout << " And it is an Even number";
    }
    else
    {
        cout << " And it is an Odd number";
    }

*/



// *** Start using switch case ***



/*
// make calculater using switch case ;

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

*/



/*
// vowel consonant finding using nested loop;
    char ch;
    cin >> ch;

    switch(ch)
    {
        case 'a' ... 'z':
            switch(ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    cout << "Vowel";
                    break;

                default:
                    cout << "Consonant";
                    break;
            }
            break;

        case 'A' ... 'Z':
            switch(ch)
            {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    cout << "Vowel";
                    break;

                default:
                    cout << "Consonant";
                    break;
            }
            break;

        default:
            cout << "Not a character";
            break;
    }
*/




// *** Starting Loop ***



/*

// writing for loop
    for(int i=0; i<10; i++)
    {
        cout << "hello: " << i << endl;
    }
*/




/*
// writing while loop
    int i=0;
    while(i<=4)
    {
        cout << "Hello: " << i << endl;
        i++;
    }
*/




/*
//writing do while loop
    int i=5;
    do
    {
        cout << "hello: " << i << endl;
        i++;
    }
    while(i<5);
*/



/*

// infinite loop
// if we miss any thing in the pera meter the loop will be an infinite loop

   for(int i=0; i<10;)
    {
        cout << "Anik: " << i << endl;
    }
*/



/*

// series sum using loop
    int num, value=0;
    cout << "Enter the end range: ";
    cin >> num;
    for(int i=0; i<num; i++)
    {
        value = value+i;
        cout << value <<endl;
    }
    cout << "Result: " << value;
*/



/*

// factorial using loop
    int a=5;
   // cin >> a;
    int fac=1;

    for(int i=a; i>0; i--)
    {
        fac = fac*i;
        cout <<  fac <<endl;
    }
 */




/*

// reverse number using loop
    int number, right_digit;
	cout<<"Enter your number"<<endl;
	cin>>number;

    while ( number != 0 ){

	right_digit = number % 10;
	cout<< right_digit;
	number = number / 10;
}
*/



/*
// use of break & continue
    for(int i=0; i<10; i++)
     {
        if(i==4)
        {
            break;
            //continue;
        }
        cout << "Anik: " << i << endl;
     }
*/



/*

// pattern 1 using loop

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
*/



/*

// pattern-2
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

      for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=rows; i>=1; i--)
    {
        for (int j=2; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

*/




// *** Starting array ***




/*

// we can write the index value as like this
     // #define m  10

      int m=5 ,values[m];  // declaring an array
      cout << m;
*/



/*

// basic char type array
   char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
    for (int i=0; i<6; i++)
    {
        cout << word[i];
    }
*/




/*
//fibonacci series using array

    int a;
    cout << "How many Fibonacci digits you want to see: ";
    cin >> a;
    int fibo[a], sum ;
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i=2; i<a; i++)
    {
       fibo[i] = fibo[i-2] + fibo[i-1];
    }

    for(int i=0; i<a; i++)
    {
        cout << fibo[i] << "    ";
        sum = sum+fibo[i];
    }
    cout << endl << endl << "And the sum is: " << sum;

*/



/*

//Multiplication in both ways (first to first and first to last)

     float a[3], b[3], c[3];
     cout << "Enter numbers for first array" << endl;
     for(int i=0; i<3; i++)
     {
         cout << "Number " << i+1 << " : ";
         cin >> a[i];
     }

     cout << "Enter numbers for second array" << endl;
     for(int i=0; i<3; i++)
     {
         cout << "Number " << i+1 << " : ";
         cin >> b[i];
     }

     //Multiplication
     cout << "After multiplication" << endl;

     for(int i=0; i<3; i++)
     {
         c[i] = a[i]*b[i];
         cout << c[i] << "    ";
     }

     cout << endl;

     int j=2;
     for(int i=0; i<3; i++)
     {
         c[i] = a[i]*b[j];
         j--;
         cout << c[i] << "    ";
     }

*/


/*

// for output tracing
    double a=5.6;
    cout <<"a : " << a <<endl;
    int b=a;
    cout <<"b : " << b <<endl;
    int c=b++;
    cout <<"c : " << c <<endl;
    double d=--a;
    cout <<"d : " <<  d <<endl;
    char ch = 'A';
    cout <<"ch : " << ch <<endl;
    cout <<"a : " << a<<endl;
    cout <<"a+a : " << (int)a+a << endl;
    cout <<"b: " << b << endl;
    cout <<"c : " << c << endl;
    cout <<"++c : " << ++c << endl;
    cout <<"d++ : " << d++ << endl;
    cout <<"d : " << d << endl;
    cout <<"c+d : " << (double)c+d << endl;
    cout <<"a!=d : " << (a!=d) << endl;
    cout <<"ch++ : " << ch++ << endl;
    cout <<"++ch : " << ++ch << endl;
    cout <<"--ch : " << --ch << endl;
    cout <<"xh : " << ch << endl;
    cout <<"b==6 : " << (b==6 ? "Yes" : "No") << endl;


    return 0;
*/

//}





// *** Starting string


#include <iostream>
// we have to use any of this 2 header file for the prebuild functoins used in string
#include <string.h>
//#include <cstring>
using namespace std ;

int main()
{
/*

//this is a char type array here in the end the '\0' is used to signal the end of a string.
// its known as the null character.
    char word [] = { 'H', 'e', 'l', 'l', 'o', '\0' ,'!' };
    cout << word <<endl;

//Initializing a string
    char word_2[]= "Hello!";
    cout << word_2 <<endl;

*/


/*
// declaring empty string
    char emp[]="";
    char empt[100]="";
*/


/*
// to write the string array in multiline
  char letters[] =
  { "abcdefghijklmnopqrstuvwxyz\
ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
   cout <<letters ;

// work same as like the upper one
  char letter[] =
   { "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    cout << letter;
*/


 // char a[]="hello!",b[]="Hello!";

// for checking the length of an array
  // cout<<strlen(a)<<endl;


// array duita pasha pashi add korte use hoi and duitar value first er tai chole jai
/*
    strcat(a,b);
    cout << a <<endl;
*/


//2nd array er koita value nibe ta n dara bole dicchi
/*
   int n=3;
   strncat(a,b,n);
   cout << a <<endl;
*/


/*

// duita array er moddhe compare korte use hoi
// ekhne s1>s2 => 1 , s1<s2 => -1 , s1==s2 => 0
   char s1[]="b!",s2[]="b!";
   cout << strcmp(s1,s2);

*/


/*
// duitar moddhe compare kore kintu n e deoa value porjonto, n dara koita char nibe ta bola hocche
   char s1[]="Hello!",s2[]="Helo!";
   int n=4;
   cout << strncmp(s1,s2,n);
*/


/*

// empty array te onno array er value diye dite use hoi
   char s1[]="",s2[]="Hello!";
// ekhne first array te 2nd er value ta chole jabe
   strcpy(s1,s2);
   cout << s1;
*/



/*
   // je value deoa thakbe tar por theke dekhabe
   char sn1[]="Hello!";
   cout<<strchr(sn1,'e')<<endl;
*/



/*
// **problem**
// same as upper one sudhu n dara bole dicchi koita char nibe
   char s1[]="",s2[]="hi every \0 one";
   int n = 1;
   strncpy(s1,s2,n);
   cout << s1;
*/



/*
// basic output tracing with string
char string1[] = "this is";
char string2[] = "a test";
char string3[20] = "Hello, ";
char string4[] = "world!";
cout<< string3<<endl;
strcat(string3, string4);
cout<<string3<<endl;
if(strcmp(string1, string2) == 0)
	cout<<"strings are equal"<<endl;
else cout<<"strings are different"<<endl;

*/




// string with all the prebuild function together

    char s1[] = "Hi \0 Class"; // Note the null character '\0'
    char s2[] = "Students";
    char c1[] = "Students ";
    char c2[] = "Hi \0 and greetings";
    char s3[50];
    char s4[50];

    cout<<"s1: " <<s1<<endl; // Print s1
    cout<<"Length of string :"<<strlen(s1)<<endl; // Calculate and print the length of s1
    cout<<"s1: " <<s1[0]<<endl; // Print the character at index 0 of s1

    strcat(s1,s2); // Concatenate s1 with s2
    cout<<"s1: " << s1 <<endl; // Print s1 [updated]
    cout<<"c1: "<<strncat(c1, c2, 2)<<endl; // Print c1 [updated]

    strcpy(s3, c1); // Copy s2 into s3
    cout <<"s3: " << s3 << endl; // Print s3
    strncpy(s4, c2, 5); // Copy s2 into s4
    cout <<"s4: " << s4 << endl; // Print s4

    cout<<strcmp("hi","hi")<<endl;
    cout<<strcmp("zahin","zahim")<<endl;
    cout<<strncmp("zahin","zahim",2)<<endl;

    cout<<strchr(c1,'d')<<endl;


}



