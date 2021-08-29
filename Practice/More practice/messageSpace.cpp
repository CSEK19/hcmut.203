#include <iostream>
#include <cstring>
using namespace std;

string spaceMessage(string text)
{
    int length = text.length();
    int i = 0;
    string result = "";
    bool inBracket = false;
    while (i < length)
    {
        if (text[i] != '[' && text[i] != ']' && inBracket == false)
            result += text[i];
        else if (text[i] == '[')
        {
            inBracket = true;
        }
        else if (inBracket == true)
        {
            int repeat = text[i] - 48;
            i++;
            string repeatSub = "";
            while (text[i] != ']')
            {
                repeatSub += text[i];
                i++;
            }
            for (int i = 0; i < repeat; i++)
            {
                result += repeatSub;
            }
            inBracket = false;
            continue;
        }

        i++;
    }
    return result;
}

int main()
{
    string text = "MU[2B][2A][2S][2H][2I]RISN[4O]TAMA[4Z]ING";
    string a = spaceMessage(text);
    string b = "MUBBAASSHHIIRISNOOOOTAMAZZZZING";
    cout << a.compare(b);
    return 0;
}
