#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    array<string,8>mike = {"B123" , "C234" , "A345" , "C15" , "B177" , "G3003" , "C235" , "B179"};
    cout<<"Elements that starts with letter 'B' are as follow : " <<endl;
    int w = sizeof(mike) / sizeof(mike[0]);
    for(int i =0;i<w;i++){
        if(mike[i].find('B') == 0){
            cout<<mike.at(i)<<endl;
        }
        
        
    
    }
    return 0;
    }