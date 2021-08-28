#include <iostream>
using namespace std;
int recursiveSearch(int &n, int m, int arr[], int index)
{
    //TODO
    if (arr[index] == m)
    {
        for (int i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n -= 1;
        return index;
    }

    if (index == m)
    {
        return -1;
    }
    return recursiveSearch(n, m, arr, index + 1);
}
int n, m;
int main()
{
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << recursiveSearch(n, m, arr, 0) << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}