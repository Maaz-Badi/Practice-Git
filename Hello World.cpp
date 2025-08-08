#include <iostream>
using namespace std;

double circle_area_calculator(double radius) 
{
    const double pi = 3.14159;
    double area = pi * radius* radius;
    return area;
}

int main() 
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = circle_area_calculator(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << "cm^2 \n";

    return 0;

}