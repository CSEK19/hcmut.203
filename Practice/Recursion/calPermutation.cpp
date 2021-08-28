#include <iostream>
#include <vector>
using namespace std;
//TODO declare and define sub-functions if needed
long long calcPermutation(vector<int> ar, int n)
{
    //TODO
    if (n == 1)
        return 0;
    return abs(ar.at(ar.size() - n) - ar.at(ar.size() - (n - 1))) + calcPermutation(ar, n - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << calcPermutation(arr, n);
    return 0;
}
