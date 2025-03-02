#include <iostream>
using namespace std;

int main()
{
    int totalClassesHeld , classesAttended ;
    float attendencePercentage ;

    cout << "Enter The Total Number of classes Held : " ;
    cin >> totalClassesHeld;

    while(totalClassesHeld <= 0){
    cout << "Enter A Valid Number of classes Held : " ;
    cin >> totalClassesHeld;
    }

    cout << "Enter The Total Number of Attended : " ;
    cin >> classesAttended;

    while(totalClassesHeld < classesAttended || classesAttended < 0){
    cout << "Enter A Valid Number of Attended : " ;
    cin >> classesAttended;
    }

    attendencePercentage = (float)classesAttended / totalClassesHeld * 100 ;

    cout << endl;

    if(attendencePercentage < 80){
        cout << "Attendance Percentage is : " << attendencePercentage << "%" << endl;
        cout << "You are not allowed to sit for the exam due to low attendance." << endl;
    }
    else{
        cout << "Attendance Percentage is : " << attendencePercentage << "%" << endl;
        cout << "You are allowed to sit for the exam." << endl;
    }

    return 0;

}
