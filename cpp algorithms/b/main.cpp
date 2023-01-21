#include <iostream>

using namespace std;

test (int n , int y = 51){


    return n > 51 ? 3*abs(n-51): abs(n-51);
    }

int main()
{
    cout << test (53,51) << endl;
    cout << test (30,51) << endl;
    cout << test (51,51) << endl;
}
