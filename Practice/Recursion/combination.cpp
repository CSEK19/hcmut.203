#include <iostream>
using namespace std;
int permutation(int n, int m)
{
    //TODO
    if (m == 0 || n == m)
        return 1;
    return permutation(n - 1, m) + permutation(n - 1, m - 1);
}
int main()
{
    //TODO
    int n, m;
    cin >> m >> n;
    cout << permutation(n, m);
    return 0;
}