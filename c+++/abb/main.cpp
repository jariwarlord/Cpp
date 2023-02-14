#include <iostream>

using namespace std;

int main()
{
   char fname[20],mname[20],lname[20];
   cout << "Enter the first name, middle name and last name \n";
   cin >> fname >> mname >> lname;
   cout << "Abbd name : ";
   cout << fname[0]<<"."<<mname[0]<<"."<<"";cout <<lname<<endl;
   return 0;
}
