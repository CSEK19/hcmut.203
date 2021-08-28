#include <iostream>
using namespace std;
struct POINT
{
    float x;
    float y;
};
void display(POINT *p)
{
    if (p != NULL)
    {
        cout << p->x << endl;
        cout << p->y << endl;
        delete p;
    }
}
POINT *readPoint()
{
    // TODO
    float x, y;
    cin >> x >> y;
    POINT *ptr = new POINT;
    ptr->x = x;
    ptr->y = y;
    return ptr;
}
int main()
{
    POINT *p = readPoint();
    display(p);
    delete p;
    return 0;
}