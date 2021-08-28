#include <iostream>

using namespace std;

class Coordinate 
{
    public:
    double x,y;
    Coordinate(double _x, double _y) : x(_x), y(_y) {}
    void setX(double _x)
    {
        x = _x;
    }
    void setY(double _y)
    {
        y = _y;
    }
    double getX() const
    {
        return x;
    }
    double getY() const
    {
        return y;
    }
    double distanceTo(const Coordinate &obj)
    {
        return abs(this->x - obj.getX()) + abs(this->y - obj.getY());
    }
};

int main()
{
    float Xa, Xb, Ya, Yb;
    cin >> Xa >> Xb >> Ya >> Yb;
    Coordinate a(1, 2);
    Coordinate b(0, 1);
    cout << a.distanceTo(b) << endl;
    a.setX(Xa);
    a.setY(Ya);
    b.setX(Xb);
    b.setY(Yb);
    cout << abs(a.getX() - b.getX()) + abs(a.getY() - b.getY()) << endl;
    cout << a.distanceTo(b) << endl;
    cout << abs(Xa - Xb) + abs(Ya - Yb);
    return 0;
}
