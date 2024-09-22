#include <iostream>
using namespace std;

int solution(int a,int b,int c)
{
    if(a >= b) swap(a,b);
    if(a >= c) swap(a,c);
    return a;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    cout << solution(a,b,c);
    return 0;
}