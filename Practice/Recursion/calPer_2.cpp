#include <iostream>
#include <vector>
using namespace std;
void permutations(vector<int> candidate, vector<int> remaining, long long &ans)
{
    if (remaining.size() == 0)
    {
        long long curAns = 0;
        for (int i = 0; i < (int)candidate.size() - 1; i++)
        {
            curAns += abs(candidate[i] - candidate[i + 1]);
        }
        ans = min(ans, curAns);
        return;
    }

    for (int i = 0; i < (int)remaining.size(); i++)
    {
        candidate.push_back(remaining[i]);
        vector<int> newRemaining;
        for (int j = 0; j < (int)remaining.size(); j++)
        {
            if (j == i)
                continue;
            newRemaining.push_back(remaining[j]);
        }
        permutations(candidate, newRemaining, ans);
    }
}

long long calcPermutation(vector<int> ar, int n)
{
    long long ans = 1e12;
    vector<int> init;
    permutations(init, ar, ans);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << calcPermutation(arr, n);
    return 0;
}
