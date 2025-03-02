// *** Conditional statement problems ***
// Q:1
/*#include <iostream>
using namespace std ;

int main()
{
 char letter ;     // char type variable declare kora hoyeche
 cout << "Enter the input :";     // user ke value enter korte dekhano hocche
 cin >> letter ;   // input nicche
 switch(letter)  // start switch case
 {
     case'M':   // checking the value for M or m
     case'm':
        cout <<"Male"<<endl;  // if the user input M or m this cout will work
        break;
     case'F':
     case'f':
        cout <<"Female"<<endl;   // if the user input F or f this cout will work
        break;
     default:
        cout <<"Undefined"<<endl;   // For any other input the user a,b,c,d... expet
        break;
 }

} */




//*** Loop problems ***

// Q: 1
/* #include <iostream>
using namespace std;
int main()
{
    int totalItem;
    float totalPrice,price,quantity,finalPrice;

    cout << "Enter the number of Total Items :";
    cin >> totalItem;
    cout << endl;
    for(int i=1;i<=totalItem;i++)
    {
        cout << "Enter The Price for Item number "<< i << " : " << endl;
        cin >> price;
        cout << "Enter The quantity for Item number " << i << " : " << endl;
        cin >> quantity;
        totalPrice = price * quantity;
        finalPrice = finalPrice + totalPrice ;


    }

    cout << endl;

    cout <<"The Total Cost for This Items is : " << finalPrice <<endl;
}
*/


// Q: 2
/*#include <iostream>
using namespace std;
int main()
{
    int numOfDays =5;
    float temperature , totalTemperature , humidity , totalHumidity , averageTemp , averageHumi ;

    for(int i=1;i<=5;i++)
    {
        cout << "Enter The temperature for day" << i << ": "<<endl;
        cin >> temperature ;

        cout << "Enter The humidity for day" << i << ": "<<endl;
        cin >> humidity ;

        totalTemperature = totalTemperature + temperature ;
        totalHumidity = totalHumidity + humidity ;
    }

    averageTemp = totalTemperature / numOfDays ;

    averageHumi = totalHumidity / numOfDays ;

    cout << endl ;

    cout << "The average temperature for " << numOfDays << "days is : " << averageTemp <<endl ;
    cout << "The average humidity for " << numOfDays << "days is : " << averageHumi <<endl ;

} */

//Q: 4
/*#include <iostream>
using namespace std;

int main() {
    int n ,first=1;
    float next = 0 , sum ;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << first ;
    // Calculate the sum of the series
    for (int i = 1; i < n; i++) {
        next = (float)1 /(i * i);
        cout << " + " << next ;
        sum = sum + next ;
    }

    // Output the sum
    cout << "Sum of the series: " << sum << endl;

    return 0;
}*/


// *** Array problems ***

//Q: 1

/*#include <iostream>
using namespace std;

int main() {
    int SIZE = 5;
    int numbers[SIZE];

    // Input
    cout << "Enter 5 integer numbers:"<<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Find the third largest number
    int largest = numbers[0];
    int second_largest = numbers[0];
    int third_largest = numbers[0];

    cout << largest<<endl;
    cout << second_largest<<endl;
    cout << third_largest<<endl;

    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] > largest) {
            third_largest = second_largest;
            second_largest = largest;
            largest = numbers[i];
        // cout << largest<<endl;
       // cout << second_largest<<endl;
      //  cout << third_largest<<endl;
        } else if (numbers[i] > second_largest && numbers[i] < largest) {
            third_largest = second_largest;
            second_largest = numbers[i];
    cout <<"sec:"<< second_largest<<endl;
    cout << third_largest<<endl;
        } else if (numbers[i] > third_largest) {
            third_largest = numbers[i];
        }
    }

    // Output
    cout << "The 3rd largest number is: " << third_largest << endl;

    return 0;
} */

//Q:2

/*#include <iostream>
using namespace std;

int main() {
    int SIZE = 4; // Constant representing the size of the array
    int numbers[SIZE]; // Array to store the input numbers

    // Input
    cout << "Enter 4 integer numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Finding the 2nd smallest number
    int smallest = numbers[0];
    int second_smallest = numbers[0];

    for (int i = 1; i < SIZE; ++i) {
        if (numbers[i] < smallest) {
            second_smallest = smallest;
            smallest = numbers[i];
        } else if (numbers[i] < second_smallest) {
            second_smallest = numbers[i];
        }
    }

    // Output
    cout << "The 2nd smallest number is: " << second_smallest << endl;

    return 0;
} */

//Q:3
/*#include <iostream>
using namespace std;

int main() {
    int SIZE = 5; // Constant representing the size of the array
    int numbers[SIZE]; // Array to store the input numbers

    // Input
    cout << "Enter 5 integer numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Replace even numbers with 0 and odd numbers with 1
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] % 2 == 0) {
            numbers[i] = 0; // Even number
        } else {
            numbers[i] = 1; // Odd number
        }
    }

    // Output
    cout << "Modified array:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
} */



//Q: 4

/*#include <iostream>
using namespace std;

int main() {
    int n = 100; // Maximum length of the word
    char word[n]; // Character array to store the word input

    // Input
    cout << "Enter a word: ";
    cin >> word;

   //cin.getline(word, n);  //not to use

    // Output vowels in the word
    cout << "Vowels in the word: ";
    for (int i = 0; word[i] != '\0'; ++i) {
        char letter = word[i];
        // Check if the current character is a vowel (lowercase or uppercase)
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
            letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            cout << letter << " ";
        }
    }
    cout << endl;

    return 0;
} */

//Q: 5

#include <iostream>
using namespace std;
int main() {
    int n = 100;
    char input[n];
    bool isPalindrome = true;

    // Input
    cout << "Enter a word or number: ";
    //cin.getline(input, n);   //not to use
    cin >> inputn;

    // Calculate length
    int length = 0;
    while (input[length] != '\0') {
        length++;
    }

    // Check for palindrome
    for (int i = 0; i < length / 2; ++i) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Output
    if (isPalindrome) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }

    return 0;
}







