#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(1000004,true);
int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin >> a >> b;

    
    for(int i = 2; i <= 1000000; ++i)
    {
        if(isPrime[i])
        {
            for(int j = i + i; j <= 1000000; j += i)
                isPrime[j] = false;
        }
    }

    int answer = 0;
    for(int i = a; i <= b; ++i)
    {
        if(i == 1 || !isPrime[i]) continue;
        ++answer;
    }

    cout << answer;
    return 0;
}