#include <iostream>

using namespace std;
int tuna = 20;

int main()
{
    int tuna = 69;
    cout << tuna << endl;
    cout << ::tuna << endl; //burada kulland���m�z operator sayesinde bizim ana variable��z �a��ralacak...!
}
void bucky(){
    cout << tuna << endl;
}
