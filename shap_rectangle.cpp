//####################### MAIN rectangle ##################
#include<iostream>
using namespace std;
int rectangle()
{
    float a, b, c;
    cout << "Enter the length of the rectangle : ";
    cin >> a;
    cout << "Enter the hight of the rectangle : ";
    cin >> b;
    c = a * b;
    cout << "The area of the rectangle is : " << c << endl;
    return 0;
}