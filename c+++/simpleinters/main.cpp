#include <iostream>

using namespace std;

int main()
{
    float amount,rate,time,si;

    cout << "Enter principal amount:    ";
    cin >> amount;
    cout << "Enter rate:     ";
    cin >> rate;
    cout << "Enter time:    ";
    cin >> time;

    si = (amount * rate * time)/100;
    cout <<"Si is : " << si << endl;
    return 0;
}
