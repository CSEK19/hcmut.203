#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void process(string fileName)
{
    ifstream myFile(fileName);

    if (myFile.is_open())
    {
        int numLines;
        myFile >> numLines;
        int i = 0;
        myFile.ignore();
        double h = 0, w = 0;
        while (i < numLines)
        {
            string line;
            while (getline(myFile, line))
            {
                stringstream ss(line);
                string name, gender, order_str, height_str, weight_str;
                int order;
                double height, weight;

                getline(ss, name, ',');
                ss >> order;
                getline(ss, order_str, ',');
                getline(ss, gender, ',');
                ss >> height;
                getline(ss, height_str, ',');
                ss >> weight;
                getline(ss, weight_str, ',');
                h += height;
                w += weight;
                //cout << name << ' ' << order << ' ' << gender << ' ' << height << ' ' << weight << endl;
            }

            i++;
        }
        cout << h / numLines << ' ' << w / numLines;
    }

    myFile.close();
}

int main()
{
    process("processFile_2_data.txt");
    return 0;
}
