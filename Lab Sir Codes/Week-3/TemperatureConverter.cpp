#include<iostream>
using namespace std;
int main()
{
    float Celsius, Fahrenheit, Kelvin;
    cout << "***** Temperature Converter *****";
    cout << endl << endl;

    cout << "Enter a temperature in Celsius: ";
    cin >> Celsius;
    cout << endl;

    Fahrenheit = Celsius*((float)9/5)+32;
    Kelvin = (Fahrenheit-32)*((float)5/9)+273.15;

    cout << "In Celsius, the temperature is: " << Celsius << endl << endl;
    cout << "In Fahrenheit, the temperature is: " << Fahrenheit << endl << endl;
    cout << "In Kelvin, the temperature is: " << Kelvin << endl << endl;

    cout << "THANK YOU.";
}
