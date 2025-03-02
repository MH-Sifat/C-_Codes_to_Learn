#include <iostream>
using namespace std;

int main()
{

 int number_1 , number_2 , number_3;  //declared 3 variables
 cout << "Enter Number 1: " ;
 cin >> number_1;
 cout << "Enter Number 2: " ;   // getting input values from user
 cin >> number_2;
 cout << "Enter Number 3: " ;
 cin >> number_3;


 if(number_1 > number_2)   // the conditions of calculating the largest number
{
    if(number_1 > number_3){
        if(number_1%2 == 0){
        cout << "The Largest Number is " << number_1 << ".It is an even number" << endl;
      }
      else{
        cout << "The Largest Number is " << number_1 << ".It is an odd number" << endl;
      }
    }
    else{
         if(number_3%2 == 0){
        cout << "The Largest Number is " << number_3 << ".It is an even number" << endl;
      }
      else{
        cout << "The Largest Number is " << number_3 << ".It is an odd number" << endl;
      }
    }

 }

 else if(number_2 >number_3){
      if(number_2%2 == 0){      // calculation of even odd number
        cout << "The Largest Number is " << number_2 << ".It is an even number" << endl;
    }
    else{
        cout << "The Largest Number is " << number_2 << ".It is an odd number" << endl;
    }
 }

 else{
      if(number_3%2 == 0){
        cout << "The Largest Number is " << number_3 << ".It is an even number" << endl;
    }
    else{
        cout << "The Largest Number is " << number_3 << ".It is an odd number" << endl;
    }
 }

 return 0;

}
