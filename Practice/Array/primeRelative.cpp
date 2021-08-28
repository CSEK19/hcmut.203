#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int N, M;
    cin >> N >> M;
    if(GCD(N,M) == 1)
    cout << 1;
    else
        cout << -1;
    return 0;
    // TODO
}
