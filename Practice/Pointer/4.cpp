#include <iostream>
using namespace std;
int findMax(int *ar, int n)
{
    //TODO
    int max = ar[0];
    for (int i = 1; i < n; i++)
        if (max < ar[i])
            max = ar[i];
    return max;
}
int main()
{
    int n;
    cin >> n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << findMax(ar, n);
    delete[] ar;
    return 0;
}