#include <iostream>

using namespace std;
void printNumber(int x){
    cout << "i am prinint an int " << x << endl;
} // bunlar sadece spesifik de�erleri �al��t�ran fonksiyonlar int/float...
void printNumber(float x){
cout << "i am printin an float " <<x << endl;
}// iki tane printNumber yaratt�k bunun ad� overlading..
int main()
{
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}
