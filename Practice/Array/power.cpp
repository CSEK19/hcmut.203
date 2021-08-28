#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    int res = 1;
    for (int i = 1; i <= n; i++)
        res = res * a;
    cout << res;
    return 0;
}