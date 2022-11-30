#include <iostream>

using namespace std;
int factorialFinder(int x ){
    if(x==1){
        return 1;// burasý ihtiyacýmýz olan base case bizim fonksiyonumuzu bozacak olan casein özel olarak belirtilmiþ hali.

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
     // kendini çaðýrabilen fonksiyon olayýna recursion denir.
    bucky();


}
// sonuç olarak bu program bize sonsuza kadar devam eden bir döngü verecektir.
// recursive fonksiyon yaratýrken base case e ihtiyacýmýz vardýr..

*/
