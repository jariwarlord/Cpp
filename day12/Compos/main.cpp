#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday birthObj(07,29,1999);
    People buckyRoberts("Berke Dalar ",birthObj);
    buckyRoberts.printInfo();
}
