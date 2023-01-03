#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream berkeFile;
    berkeFile.open("berke.txt");

    berkeFile << "Ben berke dalar ve asit severim! \n";
    berkeFile.close();

}
