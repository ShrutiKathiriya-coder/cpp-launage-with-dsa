#include <iostream>
using namespace std;
main()
{
    float r,perameter;
    const float PI=3.14;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    perameter = 2 * PI * r;

    cout << "Perimeter  of the circle = " << perameter << endl;
}