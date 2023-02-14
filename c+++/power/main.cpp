#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num,a,b,c,d;
    cout << "give me your number: ";
    cin >> num;
    a = pow(num,1);
    b = pow(num,2);
    c = pow(num,3);
    d = pow(num,4);

    cout << "First power of your number is: " << a << "Second power of your number is: " << b << "Third power of your number is: " << c << "Fourth power of your number is: " << d;
}
