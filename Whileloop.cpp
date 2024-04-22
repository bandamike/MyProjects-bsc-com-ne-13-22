#include <iostream>
#include <Math.h>

using namespace std;

int main(){
    int value;

    cout <<"Enter an integer value between 5 and 10 : "<<endl;
    cin >> value;
      
    
    while((value < 5) || (value>10)){
     cout<<"you entered invalid input,"<<endl;
     cout << "enter a number btwn 5 and 10: ";
     cin >>value;
     }
       cout << "your number ("<<value<<") has been accepted"<<endl;
     return 0;
     }