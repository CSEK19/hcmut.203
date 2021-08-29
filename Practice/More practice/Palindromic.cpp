#include <bits/stdc++.h>
using namespace std;

string longestPalSubstr(string str)
{

    int maxLength = 1, start = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            int flag = 1;

            for (int k = 0; k < (j - i + 1) / 2; k++)
                if (str[i + k] != str[j - k])
                {
                    flag = 0;
                    break;
                }

            if (flag && (j - i + 1) > maxLength)
            {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    string result = str.substr(start, maxLength);

    return result;
}

int main()
{
    string str = "babad";
    cout << longestPalSubstr(str);
    return 0;
}