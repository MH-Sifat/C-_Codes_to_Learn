#include <iostream>
using namespace std;

int main()
{
    double height,weight,bmi; //declare variable
    cout << "BMI (BOdy Mass Index) calculator***"<<endl;
    cout << endl;
    cout <<"Please enter your weight(kg) :";
    cin >> weight;
    cout <<"Please enter your height(meter) :" ;
    cin >> height ;
    bmi = weight/(height*height);

    cout <<"YOur BMI is: " << bmi <<endl;
    return 0;
}
