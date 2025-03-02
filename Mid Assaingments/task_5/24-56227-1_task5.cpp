#include <iostream>
using namespace std;

int main()
{

    int number, sum = 0;

    // Input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the sum of numbers divisible by 3
   /* for ( int i = 1; i <= number; i++) {
        if (i % 3 == 0) {
            sum += i;
            cout << "The sum of : " << i <<"," <<endl ;
        }
    }

    cout << "The sum of numbers divisible by 3 between 1 and the given number : " << number << " is : " << sum << endl;
*/

int i=1;
while(i<=number)
{
    if(i%3 == 0){
        sum += i;
        cout << i;
    }
    i++;
}
cout << sum;

}


