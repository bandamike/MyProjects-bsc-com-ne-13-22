#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){
    srand(time(NULL));
    int random_num;
    random_num = (rand() %10) + 1;
    int valueofdaysuntilexpirationdays;
    valueofdaysuntilexpirationdays = random_num;
    if((5<random_num) && (random_num<=10)){

        cout <<"your subscription will expire soon. Renew now!" <<valueofdaysuntilexpirationdays;

    }else if((1<random_num) && (random_num <=5)){
        cout <<"your subscription expers in " <<valueofdaysuntilexpirationdays<<endl;
    } else if(random_num==1){
        cout <<"your subscription expires in a day. Renew now!!!";
    }else if(random_num<1){
        cout<<"your subscription has expired!!!";

    }else 
    cout<<"your subscripton is activated!!";
    
    return 0;
}
