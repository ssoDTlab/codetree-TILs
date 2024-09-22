#include <iostream>
using namespace std;

int ForSum(int n)
{
    int ret = 0;
    for(int i = 1; i <= n; ++i)
    {
        ret += i;
    }
    return ret / 10;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    cout << ForSum(n);
    return 0;
}