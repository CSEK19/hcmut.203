#include <iostream>
using namespace std;
int calcSum(int *ar, int n)
{
    //TODO
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += ar[i];
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << calcSum(ar, n);
    delete[] ar;
    return 0;
}