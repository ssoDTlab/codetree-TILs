#include <iostream>
using namespace std;

void PrintSquare(int n)
{
    int value = 1;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cout << value << ' ';
            value += 1;
            if(value == 10) value  = 1;
        }
        cout << '\n';
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;

    PrintSquare(n);
    return 0;
}