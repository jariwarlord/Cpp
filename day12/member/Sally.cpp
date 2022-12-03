#include "Sally.h"
#include <iostream>

Sally::Sally(int a, int b)
: regVar(a),constVar(b)
{


}
void Sally::print(){
    cout << "regular var is : " << regVar << " const variable is:" << constVar << endl;
}


