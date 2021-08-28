#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int size = str.length();
    int max = 0;
    int i = 0;
    while (i < size)
    {
        char c = str[i];
        int temp = 1;
        if (max < temp)
            max = temp;
        int j = i + 1;
        while (j < size)
        {
            if (str[j] == c)
            {
                temp++;
                if (max < temp)
                    max = temp;
            }
            else
            {
                temp = 0;
                break;
            }
            j++;
        }
        i++;
    }

    cout << max;
    return 0;
}