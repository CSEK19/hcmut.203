#include <iostream>
using namespace std;
int *getValueAtIndex(int *arr, int n, int k)
{
    //TODO
    for (int i = 0; i < n; i++)
    {
        if (k == i)
            return &arr[i];
    }
    return NULL;
}
int main()
{
    int n;
    cin >> n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int k;
    cin >> k;
    int *p = getValueAtIndex(ar, n, k);
    if (p == NULL)
        cout << "NULL pointer";
    else
        cout << *p;
    delete[] ar;
    return 0;
}