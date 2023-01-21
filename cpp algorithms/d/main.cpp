#include <iostream>

using namespace std;

bool test(int x)
        {
              if(x == 10 || x == 100 || x == 200)


                return true;
            return false;
        }

int main()
 {
  cout << test(103) << endl;
  cout << test(90) << endl;
  cout << test(89) << endl;
  cout << test(100) << endl;


  return 0;
}
