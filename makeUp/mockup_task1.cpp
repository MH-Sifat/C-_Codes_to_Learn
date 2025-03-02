#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the area of a triangle given its three sides
double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        double A, B, C, D;
        cin >> A >> B >> C >> D; // Length of four sides

        // Calculate the maximum area using the four sides
        double maxArea = 0;

        // Calculate area for triangles (A, B, C), (A, B, D), (A, C, D), (B, C, D)
        double area1 = calculateArea(A, B, C);
        maxArea = max(maxArea, area1);
        double area2 = calculateArea(A, B, D);
        maxArea = max(maxArea, area2);
        double area3 = calculateArea(A, C, D);
        maxArea = max(maxArea, area3);
        double area4 = calculateArea(B, C, D);
        maxArea = max(maxArea, area4);

        // Output the maximum area rounded up to 2 decimal places
        cout << fixed << setprecision(2) << maxArea << endl;
    }

    return 0;
}
