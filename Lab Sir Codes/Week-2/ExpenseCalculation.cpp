#include<iostream>
using namespace std;
int main()
{
    int FoodCost, TravelCost, OtherCost;
    cout << "Please enter your food cost for a day: ";
    cin >> FoodCost;
    cout << "Please enter your travel cost for a day: ";
    cin >> TravelCost;
    cout << "Please enter your other costs for a day: ";
    cin >> OtherCost;

    cout << endl << endl;

    cout << "Your total cost per day is " << (FoodCost+TravelCost+OtherCost) << " Taka." << endl;
    cout << "Your total cost per week is " << (FoodCost+TravelCost+OtherCost)*7 << " Taka." << endl;
    cout << "Your total cost per month is " << (FoodCost+TravelCost+OtherCost)*30 << " Taka." << endl;
    cout << "Your total cost per year is " << (FoodCost+TravelCost+OtherCost)*365 << " Taka." << endl;
}
