#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    int length = s.length();
    string sub = "";
    int max = 0;
    int temp = 0;
    while (i < length)
    {
        if (sub.empty() == true)
        {
            temp++;
            sub += s[i];
            if (max < temp)
                max = temp;
        }
        else
        {
            bool contain = false;
            for (int j = sub.length() - 1; j != -1; j--)
            {
                if (sub[j] == s[i])
                {
                    sub.clear();
                    sub += s[i];
                    temp = 1;
                    contain = true;
                    break;
                }
            }
            if (contain == false)
            {
                sub += s[i];
                temp++;
                if (max < temp)
                    max = temp;
            }
        }
        i++;
    }
    cout << max;
    return 0;
}