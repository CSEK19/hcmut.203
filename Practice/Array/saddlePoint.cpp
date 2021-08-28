#include <iostream>

using namespace std;

int main()
{
    // TODO
    int R, C;
    cin >> R >> C;
    if (R == 0 || C == 0)
    {
        cout << -1;
        return 0;
    }
    int **ar = new int *[R];
    for (int i = 0; i < R; i++)
    {
        ar[i] = new int[C];
        for (int j = 0; j < C; j++)
            cin >> ar[i][j];
    }

    for (int i = 0; i < R; i++)
    {
        int min_R = ar[i][0], idx_C = 0;
        for (int j = 1; j < C; j++)
        {
            if (min_R > ar[i][j])
            {
                min_R = ar[i][j];
                idx_C = j;
            }
        }

        int k = 0;
        for (; k < R; k++)
        {
            if (min_R < ar[k][idx_C])
                break;
        }
        if (k == R)
        {
            cout << min_R;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
