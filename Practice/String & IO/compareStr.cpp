#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // TODO
    int M, N;
    cin >> M >> N;
    string a, b;
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        a += s;
    }
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        b += s;
    }
    if (a.compare(b) == 0)
        cout << "true";
    else
        cout << "false";
    return 0;
}