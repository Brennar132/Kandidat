#include <iostream>
#include <iomanip>
using namespace std;





int main(){
    float firstPrice{};
    float lastPrice{};
    float stride{};
    float taxPercent{};
    float taxAmount{};
    float toDecimal = 0.01;


    cout << " Enter first price: ";
    cin >> firstPrice;
    cout << endl << " Enter last price: ";
    cin >> lastPrice;
    cout << endl << " Enter stide: ";
    cin >> stride;
    cout << endl << " Enter tax percentage: ";
    cin >> taxPercent;

    cout << "TEX TABLE" << endl;
    cout << "=========" << endl;
    cout << "    Price          Tax         Price with tax" << endl;
    cout << "-----------------------------------------------" << endl;
    cout <<fixed << setprecision(2);
    while(lastPrice >= firstPrice){
        
        taxAmount = firstPrice * taxPercent * toDecimal;

        cout<<"      " <<firstPrice<<"        " << taxAmount << "              " << firstPrice + taxAmount << endl; 
        firstPrice += stride; // == Haram
    }
    

}
