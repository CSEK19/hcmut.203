#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N < 0)
        N = -N;

    if (N != 0 && N % 10 == 0)
    {
        cout << -1;
        return -0;
    }

    int sum = 0;
    while (N > sum)
    {
        sum = sum * 10 + N % 10;
        N /= 10;
    }
    if (N == sum || N == sum / 10)
        cout << 1;
    else
        cout << -1;
    return 0;
}
