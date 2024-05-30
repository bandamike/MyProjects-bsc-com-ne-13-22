#include <iostream>
using namespace std;

int main(){
    int rows,columns;

   cout<<"input number of rows,maximum is 3 numbers: "<<endl;
   cin>>rows;

   cout<<"input number of columns, muximum must be 3 numbers: "<<endl;
   cin>>columns;


    if(rows>3 || columns>3){
       cout<<"incorrect dimension";
        return 1;
    }
    double** array = new double*[rows];
    for(int i=0; i<rows;i++){
    array[i]= new double[columns];
    }
    for(int i=0;i<rows;i++){
    for(int j=0;j<columns;j++)
    array[i][j] = i*columns + j;
}
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++)
        cout<<array[i][j]<<endl;
    
    }
return 0;

}