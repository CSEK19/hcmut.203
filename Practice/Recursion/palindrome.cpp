#include <iostream>
#include <string>
using namespace std;
bool palindrome(string strg)
{
    int len, k, j;
    len = strg.length();
    k = len / 2;
    j = 0;
    bool palin = true;
    while (j < k && palin)
        if (strg[j] != strg[len - 1 - j])
            palin = false;
        else
            ++j;
    return (palin);
}

bool palSub(string str, int s, int e)
{

    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;

    if (s < e + 1)
        return palSub(str, s + 1, e - 1);

    return true;
}

bool palindromeRecursion(string s)
{
    //TODO
    if (s.size() == 0)
        return true;

    return palSub(s, 0, s.size() - 1);
}
int main()
{
    //TODO
    string s;
    while (1)
    {
        getline(cin, s);
        if (s[0] == '*')
        {
            break;
        }
        if (palindrome(s) == true)
            cout << "true"
                 << " ";
        else
            cout << "false"
                 << " ";
        if (palindromeRecursion(s) == true)
            cout << "true";
        else
            cout << "false";
        cout << endl;
    }
    return 0;
}
