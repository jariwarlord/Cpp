#include "sally.h"
#include <iostream>

using namespace std;

int main()
{
    sally sallyObject;
    sally *sallyPointer = &sallyObject;

    sallyObject.printCrap();
    sallyPointer->printCrap();

}
