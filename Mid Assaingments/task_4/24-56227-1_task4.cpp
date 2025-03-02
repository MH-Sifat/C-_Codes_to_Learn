#include <iostream>
using namespace std ;

int main()
{
     /* int n;
  cout << "Enter the Value of n : " ;
  cin >>  n;

  int pre_1=0,pre_2=1,next=0,sum=1;
  cout << "Fibonacci series: " ;
  cout << pre_2 << ",";

  for(int i=2;i<n;i++){

    next = pre_1 + pre_2 ;
    pre_1 = pre_2 ;
    pre_2 = next ;
    sum += next ;
    cout << next <<",";

  }
    cout << endl;

    cout << "The sum of the first n terms of the Fibonacci series is: " <<sum <<endl;

*/

  int n;
  cout << "Enter the Value of n : " ;
  cin >>  n;

  int pre_1=0,pre_2=1,next=0,sum=1;
  cout << "Fibonacci series: " ;
  cout << pre_2 ;

  for(int i=2;i<n;i++){

    next = pre_1 + pre_2 ;
    pre_1 = pre_2 ;
    pre_2 = next ;
    sum += next ;
    cout <<","<< next ;

  }
    cout << endl;
    cout << "The sum of the first n terms of the Fibonacci series is: " <<sum <<endl;


  return 0;

}
