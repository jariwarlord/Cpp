#include <iostream>

using namespace std;

int main()
{
    int first,second;
    cout << "Enter the value of first and second variable: ";
    cin >> first >> second;
    cout << "Address of the first variable: ";
    cout << &first << "\n";
    cout << "Address of the second variable: ";
    cout << &second << "\n";
    return 0;
}
