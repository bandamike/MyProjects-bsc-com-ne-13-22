#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int random_num;
    random_num = 0 + (rand() % 11) + 1;
    int valueofdaysuntilexpirationdays;
    valueofdaysuntilexpirationdays = random_num;
    switch(random_num)
    {
        case 6 ... 10:{
          cout <<"your subscription will expire soon. Renew now!" <<valueofdaysuntilexpirationdays;
          break;  
    }
    case 2 ... 5:{
        cout <<"your subscription expers in " <<valueofdaysuntilexpirationdays<<endl;
        break;
    } case 1 ... 1:{
        cout <<"your subscription expires in a day. Renew now!!!";
        break;
    }
    case 0:{
        cout<<"your subscription is expired";

    }default:
    cout<<"your subscripton is activated!!";
    }
    
    return 0;
}