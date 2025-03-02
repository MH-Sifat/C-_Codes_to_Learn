/*#include<iostream>
using namespace std;
int main()
{
    int v = 5;
    cout << v << endl;
    cout << &v << endl;

    int *p;
    p = &v;
    cout << p << endl;
    cout << *p << endl;

    void *GenericPointer;
    GenericPointer = &v;
    cout << *((int*)GenericPointer) << endl;
    cout << GenericPointer << endl;

    int *NullPointer = NULL;
    cout << *NullPointer;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    char c = 'X';
    char d = 'D';
	//char *charPtr = &c;

    char *const charPtr = &c;
	*charPtr = 'Y'; // this is valid
	//charPtr = &d;   // not valid !!!
	cout << charPtr << endl;
	cout << *charPtr << endl;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    char c = 'X';
    char d = 'D';
	//char *charPtr = &c;

	const char *charPtr = &c;
	charPtr = &d;   // this is valid
	//*charPtr = 'Y'; // not valid !!!
	cout << charPtr << endl;
	cout << *charPtr << endl;
}*/



/*#include<iostream>
using namespace std;
int main()
{
    int value1 = 5, value2 = 10, *p1, *p2;
    p1 = &value1;
    p2 = &value2;
    cout << (*p1 + *p2) << endl;
}*/



#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *p;
    //p = &arr[0];
    p = arr;

    for(int i=0; i<10; i++)
    {
        //cout << *(p+i) << "    ";
        cout << *p++ << "    ";
    }
}
