#include <iostream>
using namespace std;
int *readArray()
{
    //TODO
    int N;
    cin >> N;
    int *arr = new int[N + 1];
    arr[N] = -1;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
    }
    return arr;
}
int main()
{
    int *p = readArray();
    int *q = p;
    while (*p != -1)
    {
        cout << *p << " ";
        p = p + 1;
    }
    delete[] q;
    return 0;
}