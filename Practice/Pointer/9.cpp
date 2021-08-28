#include <iostream>
using namespace std;
void transposeMatrix(int **ar, int n)
{
    //TODO
    int **b = new int *[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = new int[n];
        for (int j = 0; j < n; j++)
            b[i][j] = ar[j][i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ar[i][j] = b[i][j];
    for (int i = 0; i < n; i++)
        delete[] b[i];
    delete[] b;
}
int main()
{
    int n;
    cin >> n;
    int **ar = new int *[n];
    for (int i = 0; i < n; i++)
        ar[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> ar[i][j];
    transposeMatrix(ar, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete[] ar[i];
    delete[] ar;
    return 0;
}