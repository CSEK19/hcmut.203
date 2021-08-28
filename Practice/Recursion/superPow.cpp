#include <iostream>
using namespace std;
long long superPow(long long a, long long b)
{
    const long mod = 1e9 + 7;
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    long long tmp = superPow(a, b / 2);
    long long tmp2 = ((tmp % mod) * (tmp % mod)) % mod;
    if (b & 1)
        return (tmp2 * (a % mod)) % mod;
    return tmp2;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << superPow(a, b);
    return 0;
}