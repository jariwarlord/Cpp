#include <iostream>

using namespace std;

test (int x, int y){
    return x == 30  || y == 30 || (x+y == 30);
     }


int main()
{
    cout << test(30,2) << endl;
    cout << test(1,2) << endl;
    cout << test(12,18) << endl;
    return 0;
}
