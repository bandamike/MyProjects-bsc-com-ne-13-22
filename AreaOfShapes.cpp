#include <iostream>
#include <Math.h>
using namespace std;

int main()
{


    float y, x, c, s, area;
    int choice;

    cout <<"press 1 for area of a triangle";
    cout <<"\npress 2 for area of a square";
    cout <<"\npress 3 for area of  a rectangle";
    cout <<"\n press 4 to quit the program";
    cout <<"\n Enter your choice : ";

    cin >> choice;

    switch(choice) {
        case 1 :{
            cout <<"\n Enter base and height of atriandle : ";
            cin >>y>>x;
            area = (y*x)/2;
            cout <<"\n Area of triangle= " <<area<<endl;
            break;
        }
        case 2 : {
            cout <<"\n Enter the side of a square: ";
            cin >>y;
            area = y*y;
            cout <<"\n area of a square= " <<area<<endl;
            break;
        }
        case 3 : {
            cout <<"\n enter the length and width of a rectangle:";
            cin >>y>>x;
            area = y*x;
            cout <<"\n area of rectangle= "<<area<<endl;
            break;

        }
        case 4 : {
            cout << "Quit the program" ;
            break;
        }
        default :
        cout <<"\n your input was is not valid";
        cout <<"Please select the area of the area to calculate from 1 to 3 and select 4 to quit the program";
        break;
    } 
    return 0;
}