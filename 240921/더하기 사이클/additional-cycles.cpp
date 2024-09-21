#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int ret = 0;
    while(n)
    {
        //143
        ret += n % 10;
        n /= 10;
    }
    return ret;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;

    int t = n;
    int cnt = 0;
    while(true)
    {
        ++cnt;
        int ret = sum(t);
        int new_number = t % 10 * 10 + ret % 10;
        if(n == new_number) break;
        t = new_number;
    }
    cout << cnt;
    return 0;
}