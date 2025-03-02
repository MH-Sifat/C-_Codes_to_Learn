//Basic array
/*#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    //0 1 2 3 4

    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
        //arr[i] = i;
    }
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << "   ";
    }
} */



//Basic character array
/*#include<iostream>
using namespace std;
int main()
{
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'};
    for (int i=0; i<6; i++)
    {
        cout << word[i];
    }
    return 0;
}*/



//Multiplication in both ways (first to first and first to last)
#include<iostream>
using namespace std;
int main()
{
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

     //for(int i=0; i<3; i++)
     //{
         //c[i] = a[i]*b[i];
         //cout << c[i] << "    ";
     //}

     int j=2;
     for(int i=0; i<3; i++)
     {
         c[i] = a[i]*b[j];
         j--;
         cout << c[i] << "    ";
     }

     return 0;
}



// 10 ..... 20 = arr[10]
// 11, 13, 17, 19, 0,0,0,0,0,0
//Prime numbers in a range
/*#include<iostream>
using namespace std;
int main()
{
    int initial, ending, k=0;
    bool IsPrime = true;

    cout << "Enter the initial boundary: ";
    cin >> initial;
    cout << "Enter the ending boundary: ";
    cin >> ending;
    int range = ending-initial;
    int PrimeNumbers[range] = {0};

    for(int i=initial; i<=ending; i++)
    {

        IsPrime = true;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                IsPrime = false;
                break;
            }
        }
        if(IsPrime)
        {
            PrimeNumbers[k] = i;
            k++;
        }
    }

    int ArraySize = sizeof(PrimeNumbers)/sizeof(PrimeNumbers[0]);
    cout << endl << endl << "Prime numbers from " << initial << " to " << ending << " are: ";
    for(int i=0; i<ArraySize; i++)
    {
        if(PrimeNumbers[i]!=0 && PrimeNumbers[i]!=1)
        {
            cout << PrimeNumbers[i] << "     ";
        }
    }
    cout << endl << endl;
}
*/
