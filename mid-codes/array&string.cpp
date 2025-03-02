/*
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[] = "Hi \0 Class"; // Note the null character '\0'
    char s2[] = "Students";
    char c1[] = "Students ";
    char c2[] = "Hi \0 and greetings";
    char s3[50];
    char s4[50];

    cout<<s1<<endl; // Print s1
    cout<<"Length of string :"<<strlen(s1)<<endl; // Calculate and print the length of s1
    cout<<s1[0]<<endl; // Print the character at index 0 of s1

    strcat(s1,s2); // Concatenate s1 with s2
    cout<<s1<<endl; // Print s1 [updated]
    cout<<strncat(c1, c2, 2)<<endl; // Print c1 [updated]

    strcpy(s3, c1); // Copy s2 into s3
    cout << s3 << endl; // Print s3
    strncpy(s4, c2, 5); // Copy s2 into s4
    cout << s4 << endl; // Print s4

    cout<<strcmp("hi","hi")<<endl;
    cout<<strcmp("zahin","zahim")<<endl;
    cout<<strncmp("zahin","zahim",2)<<endl;

    cout<<strchr(c1,'d')<<endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    double a=5.6;
    int b=a; int c=b++;
    double d=--a; char ch = 'A';

    cout << (int)a+a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << ++c << endl;
    cout << d++ << endl;
    cout << d << endl;
    cout << (double)c+d << endl;
    cout << (a!=d) << endl;
    cout << ch++ << endl;
    cout << ++ch << endl;
    cout << --ch << endl;
    cout << ch << endl;
    cout << (b==6 ? "Yes" : "No") << endl;
    return 0;
}
*/






/*
// name piramid code
#include<iostream>
using namespace std;
int main()
{
    char arr[100] = {0};
    int count = 0;
    cout << "Enter your sequence: ";
    cin.getline(arr, 100);
    cout << endl << endl;

    for(int i=0; i<100; i++)
    {
        if(arr[i] != 0)
        {
            count++;
        }
    }

    int incStable = 0;
    for(int i=1; i<=(count/2)+1; i++)
    {
        for(int x=count/2; x>=i; x--)
        {
            cout << "  ";
        }
        int k = 0;
        int inc = 0;

        if(i==1)
        {
            for(int j=1; j<=i; j++)
            {
                cout << arr[k] << " ";
                k++;
                inc++;
            }
        }
        else
        {
            for(int j=1; j<=incStable+2; j++)
            {
                cout << arr[k] << " ";
                k++;
                inc++;
            }
        }

        incStable = inc;

        cout << endl;
    }
    cout << endl << endl;
}
*/

// solution-13
#include<iostream>
using namespace std;
int main()
{
   char first = 'X',sec='O';

    for(int i=1;i<=6;i++)
    {
        if(i%2==0)
        {
            cout << sec<< " " ;
        }
        else{
            cout << first << " ";
        }
    }
    cout << endl;
    for(int j=6;j>0;j--)
    {
        if(j%2==0)
        {
            cout << sec<< " " ;
        }
        else
        {
            cout << first << " ";
        }
    }
    cout << endl;
   for(int i=1;i<=6;i++)
    {
        if(i%2==0)
        {
            cout << sec << " " ;
        }
        else{
            cout << first << " ";
        }
    }
    cout << endl;
    for(int j=6;j>0;j--)
    {
        if(j%2==0)
        {
            cout << sec<< " " ;
        }
        else
        {
            cout << first << " ";
        }
    }

return 0;
}



/*
{

    char  a='A';
    char b=a++;
    float c=5.55;
    int d=c;

    cout << a <<'\n';
    cout << b <<'\n';
    cout << c <<'\n';
    cout << d <<'\n';
    cout << ++a<<'\n';
    cout << (int)b-- <<'\n';

    ++b;
    d++;

    cout << b <<'\n';
    cout << d <<'\n';

}
*/
