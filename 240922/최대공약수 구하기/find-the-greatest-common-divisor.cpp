#include <iostream>
using namespace std;

int gcd(int n,int m)
{
    int answer = 1;
    while(true)
    {
        int temp = answer;
        for(int i = 2; i <= min(n,m); ++i)
        {
            if(n % i == 0 && m % i == 0)
            {
                answer *= i;
                n /= i;
                m /= i;
            }
        }
        if(temp == answer) break;
    }
    return answer;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    cout << gcd(n,m);
    return 0;
}