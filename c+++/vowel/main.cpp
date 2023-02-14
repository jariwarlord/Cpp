#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "Enter your char for check !! ";
    cin >> a;
    if(a == 'a'||a == 'o'||a == 'u'||a == 'e'||a == 'i'||a == 'A'||a == 'O'||a == 'E'||a == 'I'||a == 'U') {
            cout << "Char is vowel";

    }

    else {
        cout << "Char is not vowel";
    }
    return 0;

}
