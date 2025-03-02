#include <iostream>
using namespace std;
int main()
{
  char letter;  //declare variable

  cout << "Write a letter: ";

  cin >> letter;  // getting input from user

  if(letter>='a' && letter<='z'|| letter>='A' && letter<='Z') // giving condition for checking its number or alphabet
  {

      switch(letter) // switch start
  {
  case'A':
  case'a':
  case'E':
  case'e':
  case'I':
  case'i':
  case'O':
  case'o':
  case'U':
  case'u':
    cout << letter << " is a vowel." << endl;
    break;
  default:
    cout << letter << " is a consonant." << endl;
    break;
  }

  }
  else
  {
    cout << "Not a character." << endl;
  }

  return 0;
}

