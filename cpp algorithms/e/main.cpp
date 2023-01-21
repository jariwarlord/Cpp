#include <iostream>

using namespace std;
bool test(int x)
{
    if (abs(x - 100  ) <= 10 || abs(x - 200 ) <= 10 )
            return true;
        return false;
}
int main()
{
    cout << test(89) << endl;
    cout << test(189) << endl;
    cout << test(121) << endl;
    cout << test(201) << endl;
    cout << test(101) << endl;
}
