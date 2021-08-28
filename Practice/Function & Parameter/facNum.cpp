#include <iostream>
using namespace std;

long fac(int N)
{
    int res = 1;
    for (int i = 2; i <= N; i++)
        res *= i;
    return res;
}

int main(int narg, char **argv)
{
    int N;
    cin >> N;
    long result;
    result = fac(N);
    cout << result << endl;
    return 0;
}