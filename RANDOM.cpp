
#include <iostream>
#include <random>
using namespace std;
int main(){
    random_device rd;
    mt19937 gen(rd());uniform_int_distribution<>distr
    (0, 11);
    int daysUntilExpiration = distr(gen);

    cout<<"Days until expiration: "<<daysUntilExpiration<<endl;

    switch(daysUntilExpiration){
        case0:
        cout<<"your subscription has expired";
        break;

        case1:
        cout<<"your subscription expires within a day \n";
        cout <<"Renew now and save 20%";
        break;

        case 2:
        case 3:
        case 4:
        case 5:
        cout<<"your subscription expires in2";
    
    }
    return 0;
}
