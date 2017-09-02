//by SPK
#include "shap_circle.cpp"
#include "shap_cylinder.cpp"
#include "shap_square.cpp"
#include "shap_ellips.cpp"
#include "shap_rectangle.cpp"
//#include <cstdlib>
#include <iostream>
//#include <math>
//#include <unistd>
#include <string>
#include <iostream>
using namespace std;
//###################### MAIN ##################
int main()
{
    char c;
    int s;
    do
    {  system("color 3C");
        cout << "                          >>>>>>>>>>>>>> SIMPLE CALCULATOR <<<<<<<<<<<<<" << endl;
        cout << "                          *********** Please Enter An Option ***********" << endl;
        cout << "                          ##############################################" << endl;
        cout << "                          #                 1.Circle                   #" << endl;
        cout << "                          #                 2.cylinder                 #" << endl;
        cout << "                          #                 3.Square                   #" << endl;
        cout << "                          #                 4.Ellips                   #" << endl;
        cout << "                          #                 5.Rectangle                #" << endl;
        cout << "                          ##############################################" << endl;

        cout << "                 =====>> ";
        cin >> s;
        switch (s)
        {
        case 1:
            circle();
            break;
        case 2:
            cylinder();
            break;
        case 3:
            square();
            break;
        case 4:
            ellipse();
            break;
        case 5:
            rectangle();
        default:
            cout << "Please enter only (1,2,3,4,5) !!!!!!!!" << endl;
        }
        cout << "Do you like to try another shape......(y or n) " << endl;
        cin >> c;
       // sleep();
        system("cls");
    } 
       while (c == 'y' || c == 'Y');
       if(c=='n'|| c=='N')
    {
        //system("quit");
    }
return 0;
}
//##############################################
