#include <iostream>

using namespace std;
/*
class BuckysClass{
public:
    string name;

};

int main()
{
    BuckysClass bo;
    bo.name = "Bucky roberts";
    cout << bo.name;
    return 0;
}
*/
class BuckysClass{
public:
    void setName(string x){
        name = x;

    }
    string getName(){
    return name;
    }
private:
    string name;

};

int main()
{
    BuckysClass bo;
    bo.setName("Sir Bucky Wallace");
    cout << bo.getName();
    return 0;
}
