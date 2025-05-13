// Write a Program to find the area of a triangle.

#include <iostream>
using namespace std;
main()
{
        
    float b,h,area;

     cout << "Enter the base of the triangle: ";
    cin >> b;

    cout << "Enter the height of the triangle: ";
    cin >> h;

    
    area = 0.5 * b * h;


    cout << "The area of the triangle is: " << area << endl;
}