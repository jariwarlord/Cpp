#include <iostream>

using namespace std;

int main()
{
    int age = 23;
    int money = 34;
    // if (age > 21 && money>500){
    if (age > 21 || money>500){
        cout <<  "you are allowed in!!" << endl;
    }
    /*
 bu klasik yolu logical yöntemsiz.
    if(age < 21){
        if(money > 500){
            cout << "you are allowed ion";
        }
    }
    */
}
