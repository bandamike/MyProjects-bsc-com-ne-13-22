#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //create file 
    ofstream Emmanuel("text_file.txt");
    if (Emmanuel.is_open()){
        Emmanuel<<"This is the Advanced Computer Programming";
        Emmanuel.close();
    }else{
        cout<<"unable to open file";
    }
    return 0;
}
