#include <iostream>
#include "Sally.h"

using namespace std;

int main()
{
    Sally salObj;
    salObj.printShiz();

    const Sally constObj;
    constObj.printShiz2();
    /*
    const int x = 3;
    x = 5;
    cout << x << endl;

    */
    //constant objects needs constant functions.

}
