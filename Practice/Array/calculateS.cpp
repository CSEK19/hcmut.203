#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 1;
    int i = 1;
    while (1.0 / (i * (i + 1)) >= pow(10, -6))
    {
        if (i % 2 == 0)
        {
            sum += 1.0 / (i * (i + 1));
        }
        else
        {
            sum -= 1.0 / (i * (i + 1));
        }
        i += 1;
    }

    cout << setprecision(10) << fixed;
    cout << sum << '\n';

    sum = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += 1.0 / (i * (i + 1));
        }
        else
        {
            sum -= 1.0 / (i * (i + 1));
        }
    }
    cout << sum << '\n';
}