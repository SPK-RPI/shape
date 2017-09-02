//################ CYLINDER ###################
int cyl_area()
{
    float a, b, c;
    cout << "Enter the hight of the cylinder : ";
    cin >> a;
    cout << "Enter the radius of the cylinder : ";
    cin >> b;
    c = 3.14 * b * b;
    cout << "The area of the cylinder is :  " << c << endl;
    return 0;
}
int cyl_circm()
{
    float a, b, c;
    cout << "Enter the hight of the cylinder : ";
    cin >> a;
    cout << "Enter the radius of the cylinder : ";
    cin >> b;
    c = 2 * 3.14 * a * b;
    cout << "The area of the cylinder is :  " << c << endl;
    return 0;
}
int cyl_vol()
{
    float a, b, c;
    cout << "Enter the hight of the cylinder : ";
    cin >> a;
    cout << "Enter the radius of the cylinder : ";
    cin >> b;
    c = 3.14 * a * b * b;
    cout << "The area of the cylinder is :  " << c << endl;
    return 0;
}
int cyl_surf()
{
    float a, b, c;
    cout << "Enter the hight of the cylinder : ";
    cin >> a;
    cout << "Enter the radius of the cylinder : ";
    cin >> b;
    c = 2 * 3.14 * b * (b + a);
    cout << "The area of the cylinder is : " << c << endl;
    return 0;
}
//#############################################


//################ CYLINDER MAIN ###################
//##################################################
#include<iostream>
using namespace std;
int cylinder()
{
    char c;
    int s;
    do
    {
        cout << "        ############## CYLINDER ############" << endl;
        cout << "        #         1.Area                   #" << endl;
        cout << "        #         2.Circomforence          #" << endl;
        cout << "        #         3.Volume                 #" << endl;
        cout << "        #         4.Surface area           #" << endl;
        cout << "        ####################################" << endl;
        cout << "        =====>> ";
        cin >> s;
        switch (s)
        {
        case 1:
            cyl_area();
            break;
        case 2:
            cyl_circm();
            break;
        case 3:
            cyl_vol();
            break;
        case 4:
            cyl_surf();
            break;
        default:
            cout << "Please enter only (1,2,3,4) !!!!!!!!" << endl;
        }
        cout << "Calculate for another cylinder.... (y or n): " << endl;
        cout << "====>> ";
        cin >> c;
        system("clear");
    } while (c == 'y' || c == 'Y');
    return 0;
}
