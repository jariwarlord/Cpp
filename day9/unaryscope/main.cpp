#include <iostream>

using namespace std;
int tuna = 20;

int main()
{
    int tuna = 69;
    cout << tuna << endl;
    cout << ::tuna << endl; //burada kullandığımız operator sayesinde bizim ana variableıız çağıralacak...!
}
void bucky(){
    cout << tuna << endl;
}
