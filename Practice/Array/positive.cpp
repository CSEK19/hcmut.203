#include <iostream>

using namespace std;

int main()
{
    double N, min;
    int count = 0;
    cin >> N;
    if (N >= 0)
        count++;
    min = N;
    while (N != 0)
    {
        cin >> N;
        if (N < min)
            min = N;
        if (N >= 0)
            count++;
    }
    cout << count << ' ' << min;
    return 0;
}
