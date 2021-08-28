#include <iostream>
using namespace std;
int *createPointer(int &n)
{
    //TODO
    int *ptr = &n;
    return ptr;
}
int main()
{
    int n, b;
    cin >> n >> b;
    int *p = createPointer(n);
    cout << *p << endl;
    n += b;
    cout << *p;
    return 0;
}