#include <iostream>
using namespace std;
int gcdRecursion(int p, int q)
{
    //TODO
    if (p == 0)
        return q;
    if (q == 0)
        return p;

    if (p == q)
        return p;

    if (p > q)
        return gcdRecursion(p - q, q);
    return gcdRecursion(p, q - p);
}
int gcdIteration(int a, int b)
{
    //TODO
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        if (b > a)
            b = b - a;
    }
    return a;
}
int main()
{
    int p, q;
    cin >> p >> q;
    cout << gcdRecursion(p, q) << " " << gcdIteration(p, q);
    return 0;
}
