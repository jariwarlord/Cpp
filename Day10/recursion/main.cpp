#include <iostream>

using namespace std;
int factorialFinder(int x ){
    if(x==1){
        return 1;// buras� ihtiyac�m�z olan base case bizim fonksiyonumuzu bozacak olan casein �zel olarak belirtilmi� hali.

    } else{
        return x*factorialFinder(x-1);
    }

}

int main(){
    cout << factorialFinder(5) << endl;
}
/*
void bucky(){
    cout << "ben geldim sa";
    bucky();
}
int main()
{
     // kendini �a��rabilen fonksiyon olay�na recursion denir.
    bucky();


}
// sonu� olarak bu program bize sonsuza kadar devam eden bir d�ng� verecektir.
// recursive fonksiyon yarat�rken base case e ihtiyac�m�z vard�r..

*/
