#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Give me number a number: ";
    cin >> num;
    if(num < 0 ){
            cout << "This number is negative.";

    }

    else if(num > 0){
        cout << "This number is positive.";
    }

    else {
        cout << "This number is equal to zero.";

    }

}
