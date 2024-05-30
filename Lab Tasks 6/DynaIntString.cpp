#include <iostream>
#include <iostream>
using namespace std;

int main(){
    int * integer = new int;
    * integer = 15;

    string * String = new string;
    * String = "This is c++ programming language!!";

    cout<<"The value of the dynamically allocate integer is: "<<* integer<<endl;
    cout<<"The value of the dyanamically allocated string is: "<<* String<<endl;

    return 0;
}