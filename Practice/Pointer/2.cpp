#include <iostream>
using namespace std;
int **readArray()
{
    //TODO
    int **ar = new int *[10];
    for (int i = 0; i < 10; i++)
    {
        ar[i] = new int[10];
        for (int j = 0; j < 10; j++)
        {
            int N;
            cin >> N;
            if (N == 0)
            {
                for (int k = j; k < 10; k++)
                    ar[i][k] = 0;
                break;
            }
            ar[i][j] = N;
        }
    }
    return ar;
}
int main()
{
    int **ar = readArray();
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << ar[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < 10; i++)
        delete[] ar[i];
    delete[] ar;
    return 0;
}
