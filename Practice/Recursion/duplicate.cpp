#include <iostream>
#include <vector>
using namespace std;
bool checkDuplicate(vector<int> &ar)
{
    vector<int> static val;
    if (ar.empty() == false)
    {
        int temp = ar.front();

        if (val.empty())
        {
            val.push_back(temp);
            ar.erase(ar.begin() + 0);

            return checkDuplicate(ar);
        }
        else
        {
            for (size_t i = 0; i < val.size(); i++)
                if (temp == val.at(i))
                {
                    val.clear();
                    return false;
                }

            val.push_back(temp);
            ar.erase(ar.begin() + 0);

            return checkDuplicate(ar);
        }
    }

    val.clear();
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << checkDuplicate(ar);
    return 0;
}
