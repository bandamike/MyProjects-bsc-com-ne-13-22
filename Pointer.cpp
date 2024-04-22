#include <iostream>
using namespace std;

int main(){
    int* pPointer = nullptr;

    int integer=5;
    pPointer = &integer;

    cout<<"integer; "<<integer++<<endl;

    cout<<"address of interger: "<<&integer<<endl;


    cout<<"pPointer: "<<*(pPointer++)<<endl;

    cout<<"address of ppointer" <<&pPointer<<endl;
    
    return 0;
}