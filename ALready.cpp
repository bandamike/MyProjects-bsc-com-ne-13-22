#include <iostream>
#include <fstream>
using namespace std;

int main(){

   ofstream outputFile("test.txt");

   if(outputFile.is_open()){
    outputFile <<"This is advanced computer programing module" <<endl;

    outputFile.close();
    std::cout<<"The text has been written to the file"<<endl;
}else {
    std::cout <<"Failed to creat the file."<<endl;
}

return 0;
   }
   