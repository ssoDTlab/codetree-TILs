#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i < n; ++i)
    {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int ans = 0;
    for(int i = max(2,a); i <= b; ++i)
    {
        if(isPrime(i)) ans += i;
    }
    cout << ans;
    return 0;
}