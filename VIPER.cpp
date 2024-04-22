#include <iostream>
using namespace std;


int main()

{
char mike;
double num1,num2;
cout <<"Enter the mike (+, _, *, /,): ";
cin >> mike;

cout <<"Enter two numbers one at time : ";
cin>> num1 >> num2;

switch (mike)
{

case '+':
cout <<num1<<" + " <<num2<<" = " <<(num1+num2);
    break;
    case '-':
cout <<num1<<" - " <<num2<<" = " <<(num1-num2);
    break;

    case '*':

 cout <<num1<<" * " <<num2<<" = " <<(num1*num2);
    break;

    case '/':
    if (num2 !=0.0)
    cout <<num1<<" / " <<num2<<" = " <<(num1/num2);
    
    else
    cout<<"Division by zero";
    break;

default:
cout<<mike<<" is an invalid operator";
    
    

 return 0;
}

}