#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void process(string fileName)
{
    ifstream myFile(fileName);

    if (myFile.is_open())
    {
        int lines, numbers_per_line;
        myFile >> lines >> numbers_per_line;
        double *arr = new double[numbers_per_line];
        double *max = new double[lines];
        int i = 0;
        while (i < lines)
        {
            int idx_num = 0;
            while (idx_num < numbers_per_line)
            {
                myFile >> arr[idx_num];
                idx_num++;
            }
            double max_per_line = arr[0];
            for (int i = 1; i < numbers_per_line; i++)
                if (max_per_line < arr[i])
                    max_per_line = arr[i];
            max[i] = max_per_line;
            i++;
        }
        double maximum = max[0];
        for (int i = 0; i < lines; i++)
        {
            cout << max[i] << " ";
            if (maximum < max[i])
                maximum = max[i];
        }
        cout << maximum;
        delete[] arr;
        delete[] max;
    }

    myFile.close();
}

int main()
{
    process("processFile_1_data.txt");
    return 0;
}
