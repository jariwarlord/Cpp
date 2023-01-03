#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    offstream buckysFile("beefjerky.txt");

    if(buckysFile.is_open()){
        cout << "ok the file is open" << endl;
    }else {
                cout << "open the new file"} <<
    buckysFile << "oi love the bacon! \n";
    buckysFile.close();

}
