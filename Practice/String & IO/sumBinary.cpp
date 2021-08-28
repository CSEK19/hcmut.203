#include <iostream>
#include <string.h>

using namespace std;

string addBinary(string a, string b)
{
    string result = "";
    int s = 0;

    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        if (i >= 0)
            s += a[i] - '0';
        if (j >= 0)
            s += b[j] - '0';

        result = char(s % 2 + '0') + result;

        s /= 2;

        i--;
        j--;
    }
    return result;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b) << endl;
    return 0;
}