#include <iostream>
using namespace std;


bool isyun(int year)
{
    return !(year % 100 == 0 && year % 400 != 0) || year % 4 == 0;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int y; cin >> y;

    if(isyun(y)) cout << "true";
    else cout << "false";
    return 0;
}