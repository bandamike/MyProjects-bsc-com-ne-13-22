#include <iostream>
#include <limits>
using namespace std;

int main(){
    int userinput = 0;
    bool validinput = false;
    while(!(validinput)){
        cout<<"please enter an integer value between 5 and 10:\n";

        if(!(cin>>userinput)){
            cout <<"invalid input.please enter avalid integer\n";
            cin.clear();
            cin.ignore(numeric_limits <streamsize>::max(),'\n');

        }else if(userinput>=5&& userinput<=10){
            validinput = true;
        }else{cout<<"invalid range.The number must be between 5 and 10.\n ";
        }
    }
    cout<<"thank you! your input value("<<userinput<<") has been accepted\n";
}