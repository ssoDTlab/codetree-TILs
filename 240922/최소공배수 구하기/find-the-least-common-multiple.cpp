#include <bits/stdc++.h>
using namespace std;
int findGCD(int n,int m)
{
    int gcd = 0;
    for(int i = 1; i <= min(n,m); ++i)
    {
        if(n % i == 0 && m % i == 0)
            gcd = i;
    }
    return gcd;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    
    int gcd = findGCD(n,m);

    cout << n * m / gcd;
    return 0;
}