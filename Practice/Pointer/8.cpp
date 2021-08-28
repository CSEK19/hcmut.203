#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
    //TODO
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main()
{
    int *a = new int, *b = new int;
    cin >> *a >> *b;
    swap(a, b);
    cout << *a << " " << *b;
    delete a;
    delete b;
    return 0;
}