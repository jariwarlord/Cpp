#include <iostream>

using namespace std;
string test (string x)
    {
        if(x.substr(0,2) == "if" )
{
    return x;
}
return "if " + x;
    }
int main()
{
    cout << test("if else") << endl;
    cout << test("else") << endl;
}
