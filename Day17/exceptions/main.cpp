#include <iostream>

using namespace std;

int main(){
    try {
    int momsAge = 30;
    int sonsAge = 34;

    if(sonsAge > momsAge){
        throw 404;
        }
    }catch(int x){
        cout << "Son cannot be older than mommy, ERROR NUMBER: " << x << endl;
    }
}
