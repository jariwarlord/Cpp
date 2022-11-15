#include <iostream>

using namespace std;
/*

int addNumbers(int x, int y){
    int answer = x + y;
    return answer;
}

int main()
{
    cout << addNumbers(43, 86);
    return 0;
} */
int addNumbers(int x, int y, int a, int b){
    int answer = x + y + a + b;
    return answer;
}

int main()
{
    cout << addNumbers(43, 86, 32, 31);
    return 0;
}
