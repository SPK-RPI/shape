#include<iostream>
using namespace std;

//################## CIRCLE ###################
int cir_area()
{
    float a, b;
    cout << "Enter the radious of the circle: ";
    cin >> a;
    b = a * 3.14;
    cout << "The area of the circle is:" << b << endl;
    return 0;
}
int cir_circm()
{
    float a, b;
    cout << "Enter the radious of the circle: ";
    cin >> a;
    b = a * 2 * 3.14;
    cout << "The area of the circle is:" << b << endl;
    return 0;
}
int cir_vol()
{
    float a, b;
    cout << "Enter the radious of the circle: ";
    cin >> a;
    b = a * a * a * (4 / 3) * 3.14;
    cout << "The area of the circle is:" << b << endl;
    return 0;
}
int cir_surf()
{
    float a, b;
    cout << "Enter the radious of the circle: ";
    cin >> a;
    b = 4 * a * a * 3.14;
    cout << "The area of the circle is:" << b << endl;
    return 0;
}
//#############################################
//##################  CIRCLE MAIN  ####################

int circle()
{
    char c;
    int s;
    do
    {
        cout << "         ############## CIRCLE ############" << endl;
        cout << "         #         1.Area                 #" << endl;
        cout << "         #         2.Circomforence        #" << endl;
        cout << "         #         3.Volume               #" << endl;
        cout << "         #         4.Surface area         #" << endl;
        cout << "         ##################################" << endl;
        cout << "         =====>> ";
        cin >> s;
        switch (s)
        {
        case 1:
            cir_area();
            break;
        case 2:
            cir_circm();
            break;
        case 3:
            cir_vol();
            break;
        case 4:
            cir_surf();
            break;
        default:
            cout << "Please enter only (1,2,3,4) !!!!!!!!" << endl;
        }
        cout << "Calculate for another circle.... (y or n); " << endl;
        cout << "====>>";
        cin >> c;
        system("clear");
    } while (c == 'y' || c == 'Y');
    return 0;
}

