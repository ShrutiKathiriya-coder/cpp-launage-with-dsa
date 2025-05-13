// Write a Program to find Simple interest.

#include <iostream>
using namespace std;
main()
{
        float p,r,n,calculate;
    cout << "Enter the  amount : ";
    cin >> p;

    cout << "Enter Annual Rate of Interest in %: ";
    cin >> r;

    cout << "Enter the  years: ";
    cin >> n;

    
    calculate = (p * r * n) / 100;


    cout << "Simple Interest = " << calculate << endl;

}