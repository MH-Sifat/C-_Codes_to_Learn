#include <iostream>
using namespace std;

// user created Function call  for after use
void operations(int choice);
void circle();  // for circle area calculate
void rectangle(); // for rectangle area calculate
void triangle();  // for triangle area calculate
void square();    // for square area calculate
void showResults(double area);  // to show the result

// Main function
int main() {
    // Array to store operations to show user
    string options[] = {"1.Circle", "2.Rectangle" ,"3.Triangle" , "4.Square" ,"5.End the program" };
    // Variable declared to use
    int choice;

    // Displaying options to the user to choose
    cout << "Choose an operation:" << endl;
    cout << options[0] << endl;
    cout << options[1] << endl;
    cout << options[2] << endl;
    cout << options[3] << endl;
    cout << options[4] << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> choice; // taking user input

    // Handling invalid input from user
    if (choice < 1 || choice > 5) {
        cout << "Invalid choice! Please enter a number between 1 & 5." << endl;
        cout << endl;
        return main(); // if the input is invalid the main function will call again
    }
    cout << endl;
    // Calling the Operations function and sending the user's choice
    operations(choice);

    //giving logic to end the program
    if(choice == 5){
        return 0;  // if the user enter 5 the program will end
    }
    else{
        cout << endl;
        return  main();  // until the user enter 5 the program will run continuously
    }

}

// Function to perform operations based on user choice
void operations(int choice) {
    if (choice == 1) {
        circle();
    } else if (choice == 2) {
        rectangle();
    } else if (choice == 3) {
        triangle();
    } else if (choice == 4) {
        square();
    } else {
        cout << "Program ended." <<endl;
    }
}

// Function to calculate area of a circle
void circle() {
    double radius;
    cout << "*** To calculate the area of a circle ***" << endl;
    cout << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = 3.1416 * radius * radius; // Formula for area of a circle
    showResults(area); // sending the result to showResult function
}

// Function to calculate area of a rectangle
void rectangle() {
    double base, height;
    cout << "*** To calculate the area of a rectangle ***" <<endl;
    cout << endl;
    cout << "Enter the base of the rectangle: ";
    cin >> base ;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    double area = base * height; // Formula for area of a rectangle
    showResults(area);
}

// Function to calculate area of a triangle
void triangle() {
    double base, height;
    cout << "*** To calculate the area of a triangle ***" <<endl;
    cout << endl;
    cout << "Enter the base of the triangle: ";
    cin >> base ;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = 0.5 * base * height; // Formula for area of a triangle
    showResults(area);
}

// Function to calculate area of a square
void square() {
    double length;
    cout << "*** To calculate the area of a square ***" <<endl;
    cout << endl;
    cout << "Enter the side length of the square: ";
    cin >> length;
    double area = length * length; // Formula for area of a square
    showResults(area);
}

// Function to show the area result
void showResults(double area) {
    cout << "The area is: " << area << endl;
}

