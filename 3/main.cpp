#include <iostream>

using namespace std;
int main() {

float amount, rate, time, si;

cout << "Enter your princ amount: ";
cin >> amount;

cout << "Enter your Rate of Int";
cin >> rate;

cout << "Enter your Time;";
cin >> time;

si = (amount * rate* time) / 100;

cout << "Interest: " << si << endl;
    return 0;
}
