#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n,t,s,nn;
    cin >> n;
    t = n;

    int cnt = 0;
    while(true)
    {
        ++cnt;
        s = t % 10 + t / 10;
        nn = t % 10 * 10 + s % 10;
        if(n == nn) break;
        t = nn;
    }

    cout << cnt;
    return 0;
}