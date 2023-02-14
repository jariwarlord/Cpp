#include <iostream>

using namespace std;

int main()
{
    int first,second;
    cout << "Enter the first and second variable: !";
    cin >> first >> second;
    first = first+second;
    second = first-second;
    first = first-second;
    cout << first << " / " <<  second;
    return 0;
}
