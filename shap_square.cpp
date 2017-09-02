#include<iostream>
using namespace std;

//################## square ###################
int sqr_area()
{
    float a,b;
    cout << "Enter the side of the square: ";
    cin >> a;
    b = a * a;
    cout << "The area of the square is:" << b << endl;
    return 0;
}
int sqr_sqrcm()
{
    float a, b;
    cout << "Enter the side of the square: ";
    cin >> a;
    b = a * 4 ;
    cout << "The perimiter of the square is:" << b << endl;
    return 0;
}
int sqr_vol()
{
    float a,b;
    cout << "Enter the side of the square: ";
    cin >> a;
    b = a * a * a ;
    cout << "The volume of the square is:" << b << endl;
    return 0;
}
int sqr_surf()
{
    float a, b;
    cout << "Enter the side of the square: ";
    cin >> a;
    b = 4 * a * a ;
    cout << "The area of the square is:" << b << endl;
    return 0;
}
//#############################################
//##################  square MAIN  ####################

int square()
{
    char c;
    int s;
    do
    {
        cout << "         ############## SQUARE ############" << endl;
        cout << "         #         1.Area                 #" << endl;
        cout << "         #         2.Perimeter            #" << endl;
        cout << "         #         3.Volume               #" << endl;
        cout << "         #         4.Surface area         #" << endl;
        cout << "         ##################################" << endl;
        cout << "         =====>> ";
        cin >> s;
        switch (s)
        {
        case 1:
            sqr_area();
            break;
        case 2:
            sqr_sqrcm();
            break;
        case 3:
            sqr_vol();
            break;
        case 4:
            sqr_surf();
            break;
        default:
            cout << "Please enter only (1,2,3,4) !!!!!!!!" << endl;
        }
        cout << "Calculate for another square.... (y or n); " << endl;
        cout << "====>>";
        cin >> c;
        system("clear");
    } while (c == 'y' || c == 'Y');
    return 0;
}

