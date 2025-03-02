/* #include <iostream>
using namespace std;

int main() {
    // Define variables
    char sequence[50];  // Array to store the user's sequence
    int length = 0;     // Variable to store the length of the sequence
    int spaces = 0;     // Variable to store the number of spaces before printing each character

    // Ask the user to enter their sequence (name)
    cout << "Enter your sequence (name): ";
    cin.getline(sequence, 50);  // Read the sequence from the user

    // Calculate the length of the sequence
    while (sequence[length] != '\0') {
        length++;
    }

    // Calculate the number of spaces needed in each line to center the pyramid
    int totalSpaces = length - 1;

    // Print the pyramid
    for (int i = 0; i < length; i+=2) {  // Iterate through each character of the sequence
        // Print leading spaces
        for (int j = 1; j < totalSpaces; j++) {
            cout << " ";
        }

        // Print characters in increasing order
        for (int j = 0; j <= i; j++) {
            cout << sequence[j];
            if (j != i) {
                cout << " ";  // Add space between characters
            }
        }

        // Move to the next line
        cout << endl;

        // Decrease the number of spaces for the next line
        totalSpaces-=2;
    }

    return 0;
} */

#include <iostream>
using namespace std;
int main ()
{
float sum;
int courses[5];
for(int i =0 ;i<5; i++)
{
cout << "enter the marks";
cin >> courses[i];
sum +=courses[i];
}

sum = sum/5;
cout << sum;
return 0;
}


/*#include <iostream>
using namespace std;
int main ()
{
int num,r,sum=0,t;
cin >> num;
t=num;
do{
    r=num%10;
    sum=sum*10+r;
    num /=10;
}
while(num!=0);
if(t==sum){
    cout << "pailndrome";
}
else{
    cout << "not palindrome";
}
} */
