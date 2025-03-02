// *** Start 2D Array ***
/*
#include <iostream>
using namespace std ;
int main()
{
    int row=3, column=3;
// declaring 2d array
    int arr[row][column];
// prothom [] e row er value nei and second [] e column er value nei
    cout << "*** Give Input for the 2D Array ***" <<endl;
// first loop ta row er jonno kaj kore
    for(int i=0;i<row;i++)
    {
        cout << "ROW Number ["<< i  <<"]" <<endl;
// second loop ta column er jonno kaj kore
        for(int j=0;j<column;j++)
        {
            cout << "Enter the value of " <<"["<< i <<"]"<<"["<< j <<"] = ";
            cin >> arr[i][j];
        }
    }
    /*
    1 2 3   1 2 3
    4 5 6   4 5 6
    */
// upore 2ta loop use kore 2d array er input niyechi
/*
    cout << endl;

    cout << "*** The output of the 2D Array ***"<<endl;
    cout << "[ ";
    for(int i=0;i<row;i++)
    {
        //cout << "ROW Number ["<< i <<"]" <<endl;

        for(int j=0;j<column;j++)
        {
            //cout << "The value of " <<"["<< i <<"]"<<"["<< j <<"] = ";
            cout << arr[i][j] << " ";
            //cout << endl;
        }
        cout << endl;
    }
    cout << "]";
// uporer 2ta loop use kore 2D Array er output dekhano hoyeche
    cout << endl;

    cout << "*** Finding The Max & Min values from the 2D Array But the value of row is given here***" <<endl;

// max value hisabe 0 num row er 0 column er value value dhore nicchi jate onno gular sathe comapre korte pari
    int maximum = arr[0][0];

// min value hisabe 1 num row er 0 column er value value dhore nicchi jate onno gular sathe comapre korte pari
    int minimum = arr[1][0];

// ey loop ta column er value porjonto cholbe jate sob gular sathe comapre korte pare
    for(int i=0;i<column;i++)
    {
        if(arr[0][i] > maximum)
        {
            maximum = arr[0][i];
        }
        if(arr[1][i] < minimum)
        {
            minimum = arr[1][i];
        }
    }
// ekhane max & min value ber kora hoyeche ekta loop use kore karon amdr row num bole deoa hoyeche

     cout << "The Max Value is = " << maximum << endl;
     cout << "The Min Value is = " << minimum << endl;

     cout << endl;

     cout << "*** Finding The Max & Min values for every row of the Total 2D Array ***" <<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<column;j++)
        {
          if(arr[i][j] > maximum)
          {
             maximum = arr[i][j];
          }
          if(arr[i][j] < minimum)
          {
             minimum = arr[i][j];
          }
        }
          cout << "The Max Value [" << i <<"] is = " << maximum << endl;
          cout << "The Min Value[" << i <<"] is = " << minimum << endl;
     }


     cout << endl;

     cout << "*** Finding The Max & Min values for every row of the Total 2D Array ***" <<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<column;j++)
        {
          if(arr[i][j] > maximum)
          {
             maximum = arr[i][j];
          }
          if(arr[i][j] < minimum)
          {
             minimum = arr[i][j];
          }
        }
          cout << "The Max Value [" << i <<"] is = " << maximum << endl;
          cout << "The Min Value[" << i <<"] is = " << minimum << endl;
     }


     cout << endl;


     cout << "*** Finding The Max & Min values from the Total 2D Array ***" <<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<column;j++)
        {
          if(arr[i][j] > maximum)
          {
             maximum = arr[i][j];
          }
          if(arr[i][j] < minimum)
          {
             minimum = arr[i][j];
          }
        }

     }

     cout << endl ;
// ekhane max & min value ber kora hoyeche 2ta loop use kore karon ekhne puro array theke khuja hocche

     cout << "The Max Value is = " << maximum << endl;
     cout << "The Min Value is = " << minimum << endl;

     cout << endl;


     int arr_1[row][column],arr_2[row][column];

      for(int i=0;i<row;i++)
    {
        cout << "ROW Number ["<< i  <<"]" <<endl;
        for(int j=0;j<column;j++)
        {
            cout << "Enter the value of " <<"["<< i <<"]"<<"["<< j <<"] = ";
            cin >> arr_1[i][j];
        }
    }

       for(int i=0;i<row;i++)
    {
        cout << "ROW Number ["<< i  <<"]" <<endl;
        for(int j=0;j<column;j++)
        {
            cout << "Enter the value of " <<"["<< i <<"]"<<"["<< j <<"] = ";
            cin >> arr_2[i][j];
        }
    }

      maximum = arr_1[0][0];
      minimum = arr_1[1][0];

     int maximum_2 = arr_2[0][0];
     int minimum_2 = arr_2[1][0];

     int largestOfAll, smallestOfAll;

      cout << "*** Finding The Max & Min values from Two 2D Arrays ***" <<endl;
       for(int i=0;i<row;i++)
     {
        for(int j=0;j<column;j++)
        {
          if(arr_1[i][j] > maximum)
          {
             maximum = arr_1[i][j];
          }
          if(arr_1[i][j] < minimum)
          {
             minimum = arr_1[i][j];
          }
        }
     }

     for(int i=0;i<row;i++)
     {
        for(int j=0;j<column;j++)
        {
          if(arr_2[i][j] > maximum_2)
          {
             maximum_2 = arr_2[i][j];
          }
          if(arr_2[i][j] < minimum_2)
          {
             minimum_2 = arr_2[i][j];
          }
        }
     }

    if(maximum < maximum_2)
    {
        largestOfAll = maximum_2;
    }
    else{
        largestOfAll = maximum ;
    }

     if(minimum > minimum_2)
    {
        smallestOfAll = minimum_2;
    }
    else{
        smallestOfAll = minimum ;
    }

    cout <<"Max From Two Matrix " << largestOfAll << endl;
    cout <<"Min From Two Matrix " << smallestOfAll << endl;

     return 0;
}
*/



/*
#include <iostream>
using namespace std ;
int main()
{
  /*  int row=2,col=2;
    int arr[row][col]={1,2,3,4};  //declare with initialization
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9};

   for(int i=0;i<2;i++)
   {
       for(int j=0;j<2;j++)
       {
       cout << arr[i][j]<<" ";
       // cout << arr2[i][j]<<" ";
       }
       cout << endl;
   }
  */
/*
   int n=3,m=3;
   int a[n][m],b[n][m],addition[n][m],subtraction[n][m],multiplication[n][m],division[n][m];

   cout << "Enter Values of 2D array A :" <<endl;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout <<"["<< i + 1  <<"]"<<"["<< j + 1 <<"] = ";
           cin >> a[i][j];
       }
   }

   cout << "Enter Values of 2D array B :" <<endl;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout <<"["<< i + 1 <<"]"<<"["<< j + 1 <<"] = ";
           cin >> b[i][j];
       }
   }

   cout << "Addition in 2D Array of a + b :" <<endl;;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           addition[i][j]= a[i][j] + b[i][j];
           cout << addition[i][j] << " ";
       }
       cout << endl;
   }

   cout << "Subtraction in 2D Array of a - b :" <<endl;;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           subtraction[i][j]= a[i][j]- b[i][j];
           cout << subtraction[i][j] << " ";
       }
       cout << endl;
   }

   cout << "Multiplication in 2D Array of a * b :" <<endl;;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           multiplication[i][j]=0;
           for(int k=0;k<n;k++)
           {
              multiplication[i][j] += a[i][k] * b[k][j] ;
           }
       }
       cout << endl;
   }

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
            cout << multiplication[i][j]<<" ";
       }
       cout << endl;
   }

    // Transpose matrix b
    int transpose_b[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose_b[i][j] = b[j][i];
        }
    }

    // Perform matrix division
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            division[i][j] = 0;
            for (int k = 0; k < n; k++) {
                division[i][j] += a[i][k] / transpose_b[j][k];
            }
        }
    }

    // Output the division result
    cout << "Division in 2D Array of a / b :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << division[i][j] << " ";
        }
        cout << endl;
    }

}


/*
 12  56   5+14=19  6+16=22
 34  78
*/



// no need for now
/*
#include <iostream>
using namespace std ;
int main()
{
    int n ,m ;
    cin >> n >> m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

// spiral order print

    int row_start=0, row_end=n-1,column_start=0,column_end=m-1;

    while(row_start <= row_end && column_start <= column_end)
    {
// for row start
        for(int col=column_start;col<=column_end;col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

// for column end
        for(int row=row_start;row<=row_end;row++)
        {
            cout << arr[row][column_end] << " ";
        }
        column_end-- ;

// for row end
        for(int col=column_end;col>=column_start;col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end-- ;

// for column start
        for(int row=row_end;row>=row_start;row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;
     }

}

*/



// *** Pointer Start ***
/*
#include <iostream>
using namespace std ;
int main()
{
  int num = 5;
  // we have to declare pointer by DataType * Variable Name
  int *p;
  // giving the address of num variable to the p pointer by using ( & VariableName )
  p = &num;
  *p = 12;
  /*
   cout << p <<endl ;
   cout << *p <<endl ;
   cout << &num <<endl ;
*/
/*
  float num_1 = 15.445;
  int num_2 = num_1;
  cout << num_2 <<endl;;
  p = &num_2;
  cout << p << endl ;
  cout << *p << endl ;

  int num_3 = 30 , num_4 = 4 ;
  float div = (float) num_3 / num_4 ;
  cout << div << endl;

  void *p_2;
  p_2 = &div;

  cout << p_2 << endl;
  cout << &div << endl;
  cout << *(float*)p_2 ;
*/
/*
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int value  ;
    int *ptr = NULL ;

    if(*ptr == NULL){  // checking the pointer value if there is no value in the pointer this condition will be true
        cout << "Pointer is currently null." << endl;
    }
    else if(ptr == nullptr){ // if the pointer have no address ( *ptr = NULL ) then this condition will be true
        cout << "Pointer is currently null." << endl;
    }
    else {
        cout << "Pointer is not null." << endl;
        cout << "Value at the memory location [" << ptr << "] is: " << *ptr << endl;
    }

    return 0;
}
*/

/*
#include<iostream>
using namespace std ;
int main()
{
    char a = 'x';
    char b = 'z';

// const pointer use korle ekhne pointer er value change kora jabe kintu address change kora jabe nah ta fix thakbe

    char * const ptr = &a;
    *ptr = 'Y'; // this is valid
   // ptr = &b;   // not valid !!!
     cout << *ptr;

     cout << endl;

     int num1= 5;
     int num2= 10;
// ekhne value ta fix thakbe kintu address change kora jabe
    const int *ptr_2 = &num1;
    cout << ptr_2 << endl;
    ptr_2 = &num2;   // this is valid
	//*ptr_2 = 20; // not valid !!!
    cout << ptr_2 << endl;

}
*/


/*
#include<iostream>
using namespace std;
int main()
{
    // showing how to use pointer in array
    int arr[10] ;
    int *p;
    p = &arr[0]; // giving array address in pointer
    //p = arr;

    for(int i=0; i<10; i++)
    {
        cout << i+1 << ": " ;
        cin >>arr[i];
        //cout << *(p+i) << "    ";

    }
      for(int i=0; i<10; i++)
    {

        //cout << *(p+i) << "    ";
        cout << *p++ << "    ";
    }
}
*/


// *** funtion start ***

/*

#include<iostream>
using namespace std ;

/*
// declaring a function
// [ return type ] function name (){}
int myFunction(){}
// with out any data type
void myFunction(){}

*/


/*
#include<iostream>
using namespace std ;

// int n = 1;   // this is global variable we can access it from any where

void myFunction(int n)  // ( int n ) this is formal argument
{
 cout << n ;
}

int main()
{
     int n = 1 ;  // this is local variable we can access it only inside the perameter {}
    myFunction(n);  // this is actual arrgument
}
*/


/*

// function  pass by value
void swapingV(int a ,int b) // receiveng values
{
    int c = a;
    a = b;
    b = c;
    cout << "after swap the values :" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    return;
}


// function  pass by Reference
void swapingR(int *a ,int *b) // receiveng address
{
    int c = *a;
    *a = *b;
    *b = c;
    return;
}

void evenOdd(int num)
{
    if ( num % 2  == 0 )
     {
	 cout<<"The number is even"<<endl;
     }
    else{
	cout<<"The number is odd"<<endl;
    }
    return ;
}

void checkLeapYear(int year)
{
   int rem_4 = year % 4;

   int rem_100 = year % 100;

   int rem_400 = year % 400;


    if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0 )
    {
        cout<<"It's a leap year."<<endl;
    }
    else{
      cout<<"It's not a leap year."<<endl;
     }

     return ;
}

void checkLargest(int a ,int b , int c)
{
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

    return ;
}

void calculater(int num1 , char op , int num2)
{
     switch(op)
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
}

int main()
{
    cout << "*** Num Swapping ***" << endl;
    cout << endl;

    int a,b;
    cout << "give the values of a & b" << endl;
    cout << "a : ";
    cin >> a ;
    cout << "b : ";
    cin >> b ;
    cout << "Before swap the values :" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

// passing value from main function to custom function by perameter
    swapingV(a,b);
    cout << "Pass by value after swap the values in main fuction:" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

// passing address from main function to custom function by perameter
    swapingR(&a,&b);
    cout << "Pass by Reference after swap the values in main fuction:" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    cout << endl;

    cout << "*** Checking Even or Odd Num *** " << endl;
    cout << endl;
    int num ;
    cout << "Enter Number to check it's Even or Odd: " ;
    cin >> num;
    evenOdd(num);

    cout << endl;

    int year ;
    cout << "*** Checking Leap Year ***" << endl;
    cout << endl;

    cout << "Enter the year : " ;
    cin >> year ;
    checkLeapYear(year);

    cout << endl;

    cout << "*** Checking Largest Number ***" << endl;
    cout << endl;
    int num_1 , num_2 , num_3 ;
    cout << " enter num 1 : " ;
    cin >> num_1 ;
    cout << " enter num 2 : " ;
    cin >> num_2 ;
    cout << " enter num 3 : " ;
    cin >> num_3 ;

    checkLargest(num_1,num_2,num_3);

    cout << endl;

    cout << "*** Calculater ***" << endl;
    cout << endl;

    int no_1,no_2;
    char op ;
    cout << " enter num 1 : " ;
    cin >> no_1 ;
    cout << " enter operator : " ;
    cin >> op ;
    cout << " enter num 2 : " ;
    cin >> no_2 ;

    calculater(no_1,op,no_2);

    return 0;
}
*/




/*
#include<iostream>
using namespace std ;

// function  pass by Reference
void swapingR(int *a ,int *b) // receiveng address
{
    int c = *a;
    *a = *b;
    *b = c;
    return;
}


int main()
{

    cout << "*** Num Swapping ***" << endl;
    cout << endl;

    int a,b;
    cout << "give the values of a & b" << endl;
    cout << "a : ";
    cin >> a ;
    cout << "b : ";
    cin >> b ;
    cout << "Before swap the values :" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

// passing address from main function to custom function by perameter
    swapingR(&a,&b);
    cout << "Pass by Reference after swap the values in main fuction:" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    cout << endl;

int x;
x =10;
cout << &x << endl;
int*addx = &x;
cout << *addx <<endl;
*addx = 15;
cout << x <<endl;
cout << &addx <<endl;
int**addxx = &addx ;
cout << **addxx <<endl;;


    return 0;
}
*/


/*
#include <iostream>
using namespace std;

double salaryTax(double salary)
{
    double tax;

    if (salary>0 && salary <= 200) {
        tax = 0;
    }
    else if (salary <= 600) {
        tax = 0.1 * salary;
    }
    else if (salary <= 1200) {
        tax = 0.15 * salary;
    }
    else if (salary <= 2000) {
        tax = 0.2 * salary;
    }
    else if (salary <= 3500) {
        tax = 0.25 * salary;
    }
    else {
        tax = 0.3 * salary;
    }

    return tax;
}
int main()
{
    double salary, tax;

    cout << "Enter salary value: ";
    cin >> salary;

    tax = salaryTax(salary);

    cout << "The tax is " << tax <<  endl;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int PrintMessage();

int main()
{
    cout << PrintMessage();
}

int PrintMessage()
{
    cout << "Hello";
    return 5;  // because of this int type function it will return the value with the text
}
*/


/*
#include<iostream>
using namespace std;

void calculateTriangularNumber(int n);
int calculateTNumber(int n);

int main()
{
    calculateTriangularNumber(10);
    cout << endl;

    int value = calculateTNumber(100);
    cout << value;
    return 0;
}

void calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;
    for(i=1; i<=n; i++)
    {
        triangularNumber += i;
    }
    cout << "Triangular number "<< n << " is " << triangularNumber << endl;
}

int calculateTNumber(int n)
{
    int i, triangularNumber = 0;
    for (i=1; i<=n; i++)
    {
        triangularNumber += i;
    }
    return triangularNumber;
}
*/

/*
#include<iostream>
using namespace std;
void multiplyBy2(float arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        arr[i] *= 2;
    }
}
int main()
{
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};  // f indigate that its a float type number
    int i;
    multiplyBy2(floatVals, 4);  // passing array
    for(i=0; i<4; i++)
    {
        cout << floatVals[i] << "   ";
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;
int x; //global variable eta jekono jaiga theke access kora jabe

void f1(void)
{
    x++;
}

void f2(void)
{
    x++;
}

int main()
{
    x=7;
    f1();
    f2();
    cout << x;
}
*/

/*
#include <iostream>
using namespace std;
void auto_static()
{
// protek bar function call hole etar value 1 theke suru hobe niche increment ++autovar value store thake nah
    int autoVar = 1;
// static use kora te niche increment ++staticVar er value ta store thake
    static int staticVar = 1;
    cout << autoVar << "   " << staticVar << endl ;
    ++autoVar;
    ++staticVar;
}
int main()
{
    int i;
    for (i=0; i<5; i++)
    {
        auto_static();
    }
    return 0;
}
*/


/*
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
               //5 * factorial(4)
               //4 * factorial(3)
               //3 * factorial(2)
               //2 * factorial(1)
               //1 * factorial(0)

        //return 120
          //     5 * 24
            //   4 * 6
              // 3 * 2
              // 2 * 1
               //1 * 1
    }
}

int main()
{
    int result = factorial(5);

    cout << "Factorial of 5 is: " << result << endl;

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

// Function declaration
string checkEligibility(double cgpa, int numGradesLower, int numCourseDrop);

int main() {
    double cgpa;
    int numGradesLower, numCourseDrop;

    // Taking user input
    cout << "Enter CGPA: ";
    cin >> cgpa;
    cout << "Enter number of grades lower than B+: ";
    cin >> numGradesLower;
    cout << "Enter number of course dropped: ";
    cin >> numCourseDrop;

    // Checking eligibility and displaying output
    cout << checkEligibility(cgpa, numGradesLower, numCourseDrop) << endl;

    return 0;
}

// Function definition
string checkEligibility(double cgpa, int numGradesLower, int numCourseDrop) {
    if (cgpa >= 3.75 && numGradesLower == 0 && numCourseDrop == 0) {
        return "You are Applicable for 45% Scholarship.";
    } else if (cgpa >= 3.65 && numGradesLower == 0 && numCourseDrop <= 1) {
        return "You are Applicable for 20% Financial AID.";
    } else if (cgpa >= 3.50 && numGradesLower > 0 && numCourseDrop <= 3) {
        return "You are Applicable for 10% Financial AID.";
    } else {
        return "You are not Applicable for Scholarship or Financial AID.";
    }
}
*/

/*
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to find addition of first two factorial values
int addFactorial(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, num3, num4;

    // Taking user input for four numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;

    // Calculating factorial for each number
    int factorial_num1 = factorial(num1);
    int factorial_num2 = factorial(num2);
    int factorial_num3 = factorial(num3);
    int factorial_num4 = factorial(num4);

    // Finding addition of first two factorial values
    int addition = addFactorial(factorial_num1, factorial_num2);

    // Displaying the result
    cout << "Factorial of " << num1 << " is: " << factorial_num1 << endl;
    cout << "Factorial of " << num2 << " is: " << factorial_num2 << endl;
    cout << "Factorial of " << num3 << " is: " << factorial_num3 << endl;
    cout << "Factorial of " << num4 << " is: " << factorial_num4 << endl;
    cout << "Addition of factorial of first two numbers is: " << addition << endl;

    return 0;
}
*/


// *** structure **



/*
#include<iostream>
using namespace std;

// declaring structure
struct Student
{
    int roll;
    char name[10];
};

int main()
{

/*
// we can declare the structure inside the main function also

struct Student
{
    int roll;
    char name[10];
};

*/

/*
    //int s1, s2;
    Student s1, s2;  //declaring two variable of student type

    cout << "Enter first student roll: ";
    cin >> s1.roll;  // taking input for variable that's inside the structure
    cout << "Enter first student name: ";
    cin >> s1.name;

    cout << "Enter second student roll: ";
    cin >> s2.roll;
    cout << "Enter second student name: ";
    cin >> s2.name;

    cout << "First student name: " << s1.name << " and Roll: " << s1.roll << endl;  // showing output of variable inside structure
    cout << "Second student name: " << s2.name << " and Roll: " << s2.roll << endl;
}
*/


/*
#include<iostream>
using namespace std;

int main()
{
// declaring structure in different way
    struct{
        string course;
        int id;
    }c1,c2; // declaring 2 variable of structure type

// giving input to the members of structure
    c1.course = "C++";
    c1.id = 101;
    c2.course = "Java";
    c2.id = 102;

    cout << c1.course << " " << c1.id;
    cout << endl ;
    cout << c2.course << " " << c2.id;

}
*/

/*
#include<iostream>
using namespace std;

struct book
{
    char name[20];
    int id;
    int price;
};

int main()
{
    book b1, b2 ;

    cout << "Enter Book Name : " ;
    cin >> b1.name;
    cout << "Enter Book Id : " ;
    cin >> b1.id;
    cout << "Enter Book price : " ;
    cin >> b1.price;
    cout << "Enter Book Name : " ;
    cin >> b2.name;
    cout << "Enter Book Id : " ;
    cin >> b2.id;
    cout << "Enter Book price : " ;
    cin >> b2.price;

    cout << "books names : " << b1.name << " Id: " << b1.id << " price : " << b1.price << endl;
    cout << "books names : " << b2.name << " Id: " << b2.id << " price : " << b2.price <<endl;
    cout << "total price : " << b1.price + b2.price ;

    return 0;
}
*/


/*
#include<iostream>
using namespace std;

struct book {
string title;
int pages;
};

int main()
{
// declaring an structure type array
    book Books[3];


// every index number of an array have two members here thats are the members of structure
    Books[0].pages = 10;
    Books[0].title = "C++";
    Books[1].title = "C#";
    Books[1].pages = 25;
    Books[2].title = "Java";
    Books[2].pages = 50;



// taking input of the array by using  loop
     for(int i=0;i<3;i++)
    {
        cout << "Title: " ;
        cin >> Books[i].title ;
        cout << "Pages: " ;
        cin >> Books[i].pages;
    }

    cout << endl;
    cout << "*** Output ***" << endl;
    for(int i=0;i<3;i++)
    {
        cout << "Title: " << Books[i].title<< endl;
        cout << "Pages: " << Books[i].pages << endl;
    }
}
*/


/*
#include<iostream>
using namespace std;

struct MyStruct
{
    int a, b;
};

// using structure type function we can return many values together
MyStruct GetValues()
{
    MyStruct values;
    values.a = 10;
    values.b = 20;
    return values;
}

int main()
{
    MyStruct numbers = GetValues();
    cout << numbers.a << endl;
    cout << numbers.b;
}
*/


/*
#include<iostream>
using namespace std;

struct MyStruct
{
    int a, b;
};

MyStruct GetValues(int p, int q)
{
    MyStruct values;
    values.a = p;
    values.b = q;
    return values;
}

int main()
{
    int x, y;
    cin >> x >> y;

    MyStruct numbers = GetValues(x, y);
    cout << numbers.a << endl;
    cout << numbers.b;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "student"
/*struct student{
  string name;
  string id;
  int age;
};*/

/*
struct car{
    string brand;
    string co;
    int reg;
};

int findLatestCar(int reg1, int reg2){
    if(reg1>reg2){
        return reg1;
    }
    else{
        return reg2;
    }
}

int main(){
  // Create a student structure and store it in s1;
  /*student s1;
  s1.name = "Hamid Ali";
  s1.id = "24-XXXXX-1";
  s1.age = 20;

  // Create student structure and store it in s2;
  student s2;
  s2.name = "Farhan Ahamed";
  s2.id = "24-XXXXX-2";
  s2.age = 21;

  // Print the structure members
  cout << s1.name << " " << s1.id << " " << s1.age << endl;
  cout << s2.name << " " << s2.id << " " << s2.age << endl;*/

 /*
  int l;
  car car1;
  car1.brand = "Honda";
  car1.co = "White";
  car1.reg = 2024;

  car car2;
  car2.brand = "Honda";
  car2.co = "Red";
  car2.reg = 2019;

  l=findLatestCar(car1.reg, car2.reg);

  cout << "Latest Car Info: "<< endl;
  if(l==car1.reg){
    cout << "Brand: " << car1.brand << endl;
    cout << "Color: " << car1.co << endl;
    cout << "Registration Year: " << car1.reg << endl;
  }
  else if(l==car2.reg){
    cout << "Brand: " << car2.brand << endl;
    cout << "Color: " << car2.co << endl;
    cout << "Registration Year: " << car2.reg << endl;
  }
  return 0;
}

*/

/*
#include <iostream>
using namespace std;

// Define the Person structure
struct Person {
    string firstName;
    string lastName;
    int age;
    float salary;

    // Member function to display person's information
    void display_info() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create a Person object
    Person person;

    // Prompt user to enter details
    cout << "Enter first name: ";
    cin >> person.firstName;
    cout << "Enter last name: ";
    cin >> person.lastName;
    cout << "Enter age: ";
    cin >> person.age;
    cout << "Enter salary: $";
    cin >> person.salary;

    // Display person's information
    cout << "\nPerson's Information:\n";
    person.display_info();

    return 0;
}
*/


// *** class **


/*
#include<iostream>
using namespace std;

class myClass {         // The class
public:               // Access specifier
    int cId;         // Attribute (int variable)
    string cName;   // Attribute (string variable)
};

int main() {
    myClass myObj_1 , myObj_2;  // Creating two object of MyClass

    // Access attributes and set values
    myObj_1.cId = 101;
    myObj_1.cName = "C++";

    myObj_2.cId = 105;
    myObj_2.cName = "C#";

    // Print values
    cout << myObj_1.cId << endl;
    cout << myObj_1.cName << endl;

    cout << myObj_2.cId << endl;
    cout << myObj_2.cName;
    return 0;
}
*/



/*
#include<iostream>
using namespace std;

// declaring class
class myClass
{
    private:  // access specifier
        int data;  // attribute variable

    public: // access specifier
        void SetValues(int d)  // method it's a function that belong to the class
        {
            data = d;
        }
        void GetValues()
        {
            cout << data << endl;
        }
};

int main()
{
    myClass myObject;  // creating an object of myClass

   // int n;
   // cin >> n;

    myObject.SetValues(10);  // calling the method & passing value
    myObject.GetValues();
}
*/


/*
#include <iostream>
using namespace std;

class MyClass {                   // The class
public:                          // Access specifier
    void myMethod();             // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod()   // Scope resolution operator
{
    cout << "I am Learning Methods";
}

int main() {
    MyClass myObj;             // Create an object of MyClass
    myObj.myMethod();          // Call the method
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Student {
  public:
    int sNumber(int maxStudent); // declare an function
};

int Student::sNumber(int maxStudent)
{
  return maxStudent;
}

int main() {
  Student myObj;    // Create an object of Student
  cout << myObj.sNumber(40);  // Call the method with an argument
  return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Person
{
public:
    int NID;
    string VaccineName;
    void display()
    {
        cout << "NID No:" << NID << "," << "Vaccine Name:" << VaccineName << endl;
    }
    void setValue(int a, string b)
    {
        NID = a;
        VaccineName = b;
    }
};

int main ()
{
    Person Obj;
    Obj.setValue(2349824, "Verocell");
    Obj.display();

    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class MyClass {
    private:              // Private access specifier
    int b;           // Private attribute

public:               // Public access specifier
    int a;           // Public attribute
    void bi(int c)
    {
        b = c;
    }
    void bio()
    {
       cout << b;
    }

};

int main() {
    MyClass Obj;
    Obj.a = 10;      // Allowed (public)
    Obj.bi(20);   // Not allowed (private)
    cout << Obj.a ;   // Printing the public attribute 'a'
    Obj.bio() ; // Error: 'b' is a private member
    return 0;
}
*/


/*
#include<iostream>
using namespace std;

class MyClass {
private:
    int a;   // Private attribute
    int b;   // Private attribute
};

int main() {
    MyClass Obj;
     Obj.a = 10;  // Not allowed (private)
     Obj.b = 20;  // Not allowed (private)
     cout << Obj.a; // Error: 'a' is a private member
     cout << Obj.b; // Error: 'b' is a private member
    return 0;
}
*/



/*
#include<iostream>
using namespace std;
// encapsulation is to make sure that "sensitive" data is hidden from users for this we have to use private if others want to modify it we will use set & get method for that

class Distance
{
    private:
        int feet;
        float inches;

    public:
        void SetValues(int ft, float in)
        {
            feet = ft;
            inches = in;
        }
        void GetValues()
        {
            cout << "Feet: " << feet << " Inches: " << inches << endl;
        }
};

int main()
{
    Distance a1;
    int ft;
    float in;
    cin >> ft;
    cin >> in;
    a1.SetValues(ft, in);
    a1.GetValues();
}
*/

/*
#include <iostream> // Include directive for using cout
using namespace std;

class Student {
private:
    float cgpa;
    int salary;
public:
    void setCgpa(float c) {
        cgpa = c;
    }
    void setSalary(int s) {
        salary = s;
    }
    float getCgpa() {
        return cgpa;
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    Student obj1;
    Student obj2;
    obj1.setCgpa(3.55);
    obj2.setCgpa(3.25);
    obj1.setSalary(30000);
    obj2.setSalary(50000);
    cout << obj1.getCgpa() << endl;
    cout << obj2.getCgpa() << endl;
    cout << obj1.getSalary() << endl;
    cout << obj2.getSalary();
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

class MyClass {

private:
    int myInt;
    string myString;

public:
    // Constructor
    MyClass(int intValue, string strValue){

    //  this is the same as like this : myInt(intValue), myString(strValue)

        myInt = intValue;
        myString = strValue;

        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass(){
        cout << "Destructor called" << endl;
    }

    // Setter method for myInt
    void setInt(int value) {
        myInt = value;
    }

    // Setter method for myString
    void setString(string value){
        myString = value;
    }

    // Getter method for myInt
    int getInt(){
        return myInt;
    }

    // Getter method for myString
    string getString(){
        return myString;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj(10, "Hello");

    // Using constructor
    cout << "Integer value: " << obj.getInt() << endl;
    cout << "String value: " << obj.getString() << endl;

    // Using setter methods
    obj.setInt(20);
    obj.setString("Hello Class");

    // Using getter methods
    cout << "Integer value: " << obj.getInt() << endl;
    cout << "String value: " << obj.getString() << endl;

    return 0;
}
*/



/*
#include <iostream>
#include <string>

using namespace std;

class Student{
private:
    string name;
    string id;
    double cgpa;
public:
    void setStudent(string n, string i, double c){
        name = n;
        id = i;
        cgpa = c;
    }
    void getStudent(){
        cout << "Name: " << name << endl;
        cout << "ID: "  << id << endl;
        cout << "CGPA: "  << cgpa << endl;
        cout << endl;
    }
    double CGPA(){
        return cgpa;
    }
};

int main()
{
    string a;
    string b;
    double c;
    int x;

    cout << "Enter Number of Students: ";
    cin >> x;
    cout << endl;
    Student s[x];

    for(int i = 0; i < x; i++){
        cout << "Student Number " << i+1 << " Information" << endl;
        cout << "Enter Name : ";
        cin.ignore();
        getline(cin, a);
        cout << "Enter Id : ";
        cin.ignore();
        getline(cin, b);
        cout << "Enter CGPA : ";
        cin >> c;
        cout << endl;
        s[i].setStudent(a, b, c);
    }

    double maxi=INT_MIN;

    for(int i = 0; i < x; i++){
        if(maxi < s[i].CGPA()){
            maxi = s[i].CGPA();
        }
    }

    for(int i = 0; i < x; i++){
        if(maxi == s[i].CGPA()){
            cout << "Student with Maximum CGPA: Student Number " << i+1 << endl;
            s[i].getStudent();
        }
    }

    return 0;
}

*/


/*
#include <iostream>

#include <string>

using namespace std;

// Declare a structure named "student"

/*struct student{

  string name;

  string id;

  int age;

};*/

/*
struct car{

    string brand;

    string co;

    int reg;

};

int findLatestCar(int reg1, int reg2){

    if(reg1>reg2){

        return reg1;

    }

    else{

        return reg2;

    }

}

int main(){

  // Create a student structure and store it in s1;

  /*student s1;

  s1.name = "Hamid Ali";

  s1.id = "24-XXXXX-1";

  s1.age = 20;

  // Create student structure and store it in s2;

  student s2;

  s2.name = "Farhan Ahamed";

  s2.id = "24-XXXXX-2";

  s2.age = 21;

  // Print the structure members

  cout << s1.name << " " << s1.id << " " << s1.age << endl;

  cout << s2.name << " " << s2.id << " " << s2.age << endl;*/

/*
  int l;

  car car1;

  car1.brand = "Honda";

  car1.co = "White";

  car1.reg = 2024;

  car car2;

  car2.brand = "Honda";

  car2.co = "Red";

  car2.reg = 2019;

  l=findLatestCar(car1.reg, car2.reg);

  cout << "Latest Car Info: "<< endl;

  if(l==car1.reg){

    cout << "Brand: " << car1.brand << endl;

    cout << "Color: " << car1.co << endl;

    cout << "Registration Year: " << car1.reg << endl;

  }

  else if(l==car2.reg){

    cout << "Brand: " << car2.brand << endl;

    cout << "Color: " << car2.co << endl;

    cout << "Registration Year: " << car2.reg << endl;

  }

  return 0;

}
*/


/*
#include <iostream>
#include <string>

using namespace std;

class Pet{
public:
    string petName;
    string petType;
    string color;
    int age;
    double price;

    void setPet(string pn, string pt, string pc, int a, double p){
        petName = pn;
        petType = pt;
        color = pc;
        age = a;
        price = p;
    }
    void getPet(){
        cout << "Pet Name: " << petName << endl;
        cout << "Pet Type: "  << petType << endl;
        cout << "Pet color: "  << color << endl;
        cout << "Pet Age: "  << age << endl;
        cout << "Pet Price: "  << price << endl;
        cout << endl;
    }
    double getPrice(){
        return price;
    }
    string getPetType(){
        return petType;
    }
};

int main()
{
    string a, b, c;
    int x, d;
    double e;

    cout << "Enter Number of Pets: ";
    cin >> x;
    cout << endl;
    Pet p[x];

    for(int i=0; i < x; i++){
        cout << "Pet Number " << i+1 << " Information" << endl;
        cout << "Pet Name: ";
        cin.ignore();
        getline(cin, a);
        cout << "Pet Type: ";
        getline(cin, b);
        cout << "Pet color: ";
        getline(cin, c);
        cout << "Pet Age: ";
        cin >> d;
        cout << "Pet Price: ";
        cin >> e;
        cout << endl;
        p[i].setPet(a, b, c, d, e);
    }

    string pt;
    cout << "Enter Pet Type: ";
    cin.ignore();
    getline(cin, pt);
    cout << endl;

    for(int i = 0; i < x; i++){
        if(pt == p[i].getPetType()){
            cout << "Pet of same type is Pet Number: " << i+1 << endl;
            p[i].getPet();
        }
    }

    double pp;
    cout << "Enter Max Price: ";
    cin >> pp;
    cout << endl;

    for(int i = 0; i < x; i++){
        if(pp > p[i].getPrice()){
            cout << "Pets with lower price is Pet Number: " << i+1 << endl;
            p[i].getPet();
        }
    }

    return 0;
}
*/

