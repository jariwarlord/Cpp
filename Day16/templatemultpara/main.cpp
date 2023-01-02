#include <iostream>

using namespace std;
/*
template<class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
return (a<b?a:b);
}
*/
template <class FIRST, class SECOND>
FIRST bigger(FIRST a, SECOND b){
return (a>b?a:b);
}
int main()
{
    int x = 21;
    double y = 33.23;
    /*cout << smaller(x,y) << endl;*/
    cout << bigger(x,y) << endl;
}
