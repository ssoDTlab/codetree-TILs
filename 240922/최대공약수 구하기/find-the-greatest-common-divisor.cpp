#include <iostream>
using namespace std;

int gcd(int n,int m)
{
    int ret = 1;
    for(int i = 2; i <= min(n,m); ++i)
    {
        if(n % i == 0 && m % i == 0)
            ret *= i;
    }
    return ret;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    cout << gcd(n,m);
    return 0;
}