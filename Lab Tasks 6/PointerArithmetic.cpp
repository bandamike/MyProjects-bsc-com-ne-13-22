#include <iostream>
using namespace std;

 int main (){
   
   // null pointer
   int* pPointer = nullptr;

   int numbersArray[3] = {10, 20, 30};
   
   //assign address of the first element to pointer
   pPointer = numbersArray;

  //output the address of first element
  cout << "Address of pPointer: " << pPointer << endl;
  cout << "Address of numbersArray[0]: " << numbersArray << endl;

 // output the value of the first element using the pointer and indirection 
 cout << " Value at pPointer : " << pPointer << endl;

 // this outputs the value  of the second element
 cout << "Value at ++pPointer:" << *(pPointer) << endl;

 //assign address of the first element to pointer
 pPointer = numbersArray;

 //This outputs the value of the first element
 cout << "Value at pPointer++: " << *(pPointer++) << endl;

 return 0;


}