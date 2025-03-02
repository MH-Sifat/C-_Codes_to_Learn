#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char String1[50], String2[50];
    cout << "Enter your second string: ";
    cin >> String1;
    cout << "Enter your Third string: ";
    cin >> String2;
    cout << endl;

    if(strcmp(String1, String2) == 0)
    {
        cout << "Equal" << endl << endl;
    }
    else
    {
        cout << "Not equal" << endl << endl;
    }

    if(strncmp(String1, String2, 2) == 0)
    {
        cout << "First two characters are equal" << endl << endl;
    }
    else
    {
        cout << "First two characters are not equal" << endl << endl;
    }

    //cout << "After concatenating: " << strcat(String1, String2) << endl << endl;

    //cout << "After concatenating first 2 characters: " << strncat(String1, String2, 2) << endl << endl;

    //cout << "After copying " << strcpy(String1, String2) << endl << endl;

    cout << "After copying first 3 characters: " << strncpy(String1, String2, 3) << endl << endl;
}
