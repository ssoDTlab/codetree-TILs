#include <iostream>
using namespace std;

bool isIn369(int n)
{
    int a,b;
    a = n / 10;
    b = n % 10;
    return a == 3 || a == 6 || a == 9 || b == 3 ||  b == 6 || b == 9;
}
bool isMasicNumber(int n)
{
    return (n % 3 == 0) || isIn369(n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;

    int ans = 0;
    for(int i = a; i <= b; ++i)
    {
        if(isMasicNumber(i)) ++ans;
    }
    cout << ans;
    return 0;
}