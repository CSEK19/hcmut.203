#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int count;

    for (int i = 2; i <= N; i++)
    {
        count = 0;
        while (N % i == 0)
        {
            count++;
            N /= i;
        }
        if (count)
        {
            cout << i;
            if (count > 1)
                cout << "^" << count;
            if(N>i)
                cout << "*";
        }
    }

    return 0;
}
