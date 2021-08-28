#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int max_sum = arr[0];
    int check_sum = 0;
    for (int i = 0; i < N; i++)
    {
        check_sum += arr[i];
        if (max_sum < check_sum)
            max_sum = check_sum;
        if (check_sum < 0)
            check_sum = 0;
    }
    cout << max_sum;

    delete[] arr;
    return 0;
}
