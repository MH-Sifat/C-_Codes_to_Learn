/*#include<iostream>
using namespace std;
int main()
{
    //int values[2][3] = {{1,2,3}, {4,5,6}};
    int values[2][3] = {1,2,3,4,5,6};

    cout << endl << endl << "values are:- " << endl ;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << values[i][j] << "     ";
        }
        cout << endl;
    }
}*/



#include<iostream>
using namespace std;
int main()
{
    int values[2][3];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> values[i][j];
        }
    }
    cout << endl << endl << "values are:- " << endl ;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << values[i][j] << "    ";
        }
        cout << endl;
    }
}




/*#include<iostream>
using namespace std;
int main()
{
    float arr[2][4];
    for(int i=0; i<2; i++)
    {
        cout << "Row " << i+1 << endl;
        for(int j=0; j<4; j++)
        {
            cout << "Column = " << j+1 << ": ";
            cin >> arr[i][j];
        }
    }

    float largest = arr[0][0];
    float smallest = arr[1][0];

    for(int i=0; i<4; i++)
    {
        if(arr[0][i] > largest)
        {
            largest = arr[0][i];
        }
        if(arr[1][i] < smallest)
        {
            smallest = arr[1][i];
        }
    }

    cout << endl << endl;
    cout << "Largest element from row-1 is: " << largest << endl;
    cout << "Smallest element from row-2 is: " << smallest << endl;
}*/



//Matrix addition
/*#include<iostream>
using namespace std;
int main()
{
    int matrix1[3][3], matrix2[3][3], addition[3][3];

    cout << "Enter values for Matrix-1" << endl;
    for(int i=0; i<3; i++)
    {
        cout << "Row-" << i+1 << endl;
        for(int j=0; j<3; j++)
        {
            cout << "Column-" << j+1 << ": ";
            cin >> matrix1[i][j];
        }
    }

    cout << endl << endl;
    cout << "Enter values for Matrix-2" << endl;
    for(int i=0; i<3; i++)
    {
        cout << "Row-" << i+1 << endl;
        for(int j=0; j<3; j++)
        {
            cout << "Column-" << j+1 << ": ";
            cin >> matrix2[i][j];
        }
    }

    cout << endl << endl;
    cout << "Matrix-1" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << matrix1[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "Matrix-2" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << matrix2[i][j] << "  ";
        }
        cout << endl;
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            addition[i][j] = matrix1[i][j]+matrix2[i][j];
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "After addition, new matrix is:" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << addition[i][j] << "  ";
        }
        cout << endl;
    }
}*/
