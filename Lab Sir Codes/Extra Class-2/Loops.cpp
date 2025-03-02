//Pattern-1
/*#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
*/


//Pattern-2
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

      for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=rows; i>=1; i--)
    {
        for (int j=2; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}




//Week Day count with nested loop
/*#include <iostream>
using namespace std;

int main()
{
    int weeks = 3, days = 7;

    for (int i=1; i<=weeks; i++)
    {
        cout << "Week: " << i << endl;

        for (int j=1; j<=days; j++)
        {
            cout << "    Day:" << j << endl;
        }
    }

    return 0;
}

*/
