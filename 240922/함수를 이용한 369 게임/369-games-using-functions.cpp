#include <iostream>
using namespace std;

bool isIn369(int n)
{
    while(n)
    {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9) return true;
        n /= 10;
    }
    return false;
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