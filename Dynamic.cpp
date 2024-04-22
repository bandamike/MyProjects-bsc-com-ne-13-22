#include <iostream>
using namespace std;

int main(){
    int numberOfelements = 0;
    int* dynamicArray = nullptr;

    cout <<"How many numbers would you like to type ? ";
    cin>> numberOfelements;

    dynamicArray = new int [numberOfelements];
    if (dynamicArray == nullptr){
        cout <<"Error: memory could not be allocated ";
    }else{
        for(int i = 0;i<numberOfelements;i++){
            cout<<"enter number: ";
            cin >>dynamicArray[i];
        }
        cout <<"you have entered: ";
        for(int j = 0; j<numberOfelements;j++){
            cout<<dynamicArray[j]<<" , ";
        }
        delete[] dynamicArray;
    }
    return 0;
}