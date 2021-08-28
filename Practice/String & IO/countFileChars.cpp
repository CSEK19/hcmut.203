#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void process(string fileName)
{
    ifstream myFile(fileName);

    if (myFile.is_open())
    {
        int ws = 0, chars = 0, alphabets = 0;
        string text;

        while (getline(myFile, text))
        {
            int size = text.length();
            int index = 0;
            while (index < size)
            {
                if (text[index] == 32)
                    ws++;
                else if (text[index] >= 65 && text[index] <= 122)
                    alphabets++;
                chars++;
                index++;
            }
            if (myFile.eof() == false)
                chars++;
        }

        cout << ws << " " << chars << " " << alphabets;
    }
}

int main()
{
    process("countFile_data.txt");
    return 0;
}
