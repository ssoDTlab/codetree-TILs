#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(1000004,true);
int main() {
    // 여기에 코드를 작성해주세요.

    int a,b; 
    cin >> a >> b;

    int answer = 0;
    for(int i = 2; i * i <= b; ++i)
    {
        if(!isPrime[i]) continue;
        for(int j = i * i; j <= b; j += i)
            isPrime[j] = false;
    }

    //isPrime[1] = false;
    for(int i = a; i <= b; ++i)
        if(isPrime[i]) ++answer;
    cout << answer;
    return 0;
}