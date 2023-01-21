#include <iostream>

using namespace std;

int test(int x, int y){
    return x == y ? (x + y) * 3 : (x + y);
}

int main()
{
    cout << test(1,2) << endl;
    cout << test(13,23) << endl;
    cout << test(11,11) << endl;
    cout << test(31,53) << endl;
}
