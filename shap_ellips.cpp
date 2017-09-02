//######################## MAIN ELLIPS ###############
#include<iostream>
using namespace std;
int ellipse()
{
    float a, b, c;
    cout << "Enter the x-axis of ellipse : ";
    cin >> a;
    cout << "Enter the y-axis of the ellipse : ";
    cin >> b;
    c = 3.14 * a * b;
    cout << "The area of the ellipse is : " << c << endl;
    return 0;
}