#include <iostream>
#include <string.h>

using namespace std;

string findLongestPalindrome(string str)
{
    int max_lower = 0, max_upper = 0, size = str.length(), lower = 0, upper = 0;
    for (int i = 0; i < size; i++)
    {
        upper = i + 1, lower = i;
        for (int j = 0; j < 2; j++)
        {
            lower = i - j;
            for (; lower >= 0 and upper < size and str[lower] == str[upper]; upper++, lower--)
                ;
            if ((max_upper - max_lower) < (upper - lower - 2))
            {
                max_lower = lower + 1, max_upper = upper - 1;
            }
        }
    }
    return str.substr(max_lower, max_upper - max_lower + 1);
}

int main()
{
    string str;
    cin >> str;
    cout << findLongestPalindrome(str);
}