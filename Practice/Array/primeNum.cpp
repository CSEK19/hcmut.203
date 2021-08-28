#include <iostream>

using namespace std;

bool isPrime(int N)
{
    if (N <= 1)
        return false;
    for (int i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    if (isPrime(N))
        cout << N << " is a prime number\n";
    else
        cout << N << " is not a prime number\n";

    if (N > 0)
    {
        int i = 0;
        int num = 2;
        while (i != N)
        {
            if (isPrime(num))
            {
                i++;
                if (i == N)
                    break;
            }
            num++;
        }
        cout << num;
    }
    else
        cout << "-1";

    return 0;
}
