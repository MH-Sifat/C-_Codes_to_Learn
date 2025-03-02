/*#include<iostream>
using namespace std;

struct Student
{
    int roll;
    char name[10];
};

int main()
{
    //int s1, s2;
    Student s1, s2;

    cout << "Enter first student roll: ";
    cin >> s1.roll;
    cout << "Enter first student name: ";
    cin >> s1.name;

    cout << "Enter second student roll: ";
    cin >> s2.roll;
    cout << "Enter second student name: ";
    cin >> s2.name;

    cout << "First student name: " << s1.name << " and Roll: " << s1.roll << endl;
    cout << "Second student name: " << s2.name << " and Roll: " << s2.roll << endl;
}*/



/*#include<iostream>
using namespace std;

struct MyStruct
{
    int a, b;
};

MyStruct GetValues()
{
    MyStruct values;
    values.a = 10;
    values.b = 20;
    return values;
}

int main()
{
    MyStruct numbers = GetValues();
    cout << numbers.a << endl;
    cout << numbers.b;
}*/



/*#include<iostream>
using namespace std;

struct MyStruct
{
    int a, b;
};

MyStruct GetValues(int p, int q)
{
    MyStruct values;
    values.a = p;
    values.b = q;
    return values;
}

int main()
{
    int x, y;
    cin >> x >> y;

    MyStruct numbers = GetValues(x, y);
    cout << numbers.a << endl;
    cout << numbers.b;
}*/



/*#include<iostream>
using namespace std;

class anik
{
    private:
        int data;

    public:
        void SetValues(int d)
        {
            data = d;
        }
        void GetValues()
        {
            cout << data << endl;
        }
};

int main()
{
    anik a1;
    a1.SetValues(10);
    a1.GetValues();
}*/



/*#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;

    public:
        void SetValues(int ft, float in)
        {
            feet = ft;
            inches = in;
        }
        void GetValues()
        {
            cout << "Feet: " << feet << " Inches: " << inches << endl;
        }
};

int main()
{
    Distance a1;
    a1.SetValues(10, 15.5);
    a1.GetValues();
}*/




#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;

    public:
        void SetValues(int ft, float in)
        {
            feet = ft;
            inches = in;
        }
        void GetValues()
        {
            cout << "Feet: ";
            cin >> feet;
            cout << "Inches: ";
            cin >> inches;
        }
        void ShowValues()
        {
            cout << "Feet: " << feet << " Inches: " << inches << endl;
        }
};

int main()
{
    Distance a1, a2;

    a1.SetValues(10, 15.5);
    a1.ShowValues();

    a2.GetValues();
    a2.ShowValues();
}

