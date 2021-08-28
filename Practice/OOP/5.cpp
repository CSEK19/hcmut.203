#include <iostream>
using namespace std;

// TODO
class Rectangle
{

public:
    float h, w;
    Rectangle(float _h, float _w) : h(_h), w(_w) {}

    void display();
};

void Rectangle::display()
{
    cout << "Info of rectangle: \n";
    cout << "height = " << this->h << ' ' << "width = " << this->w << endl;
}

int main()
{
    // TODO
    float F, W;
    cin >> F >> W;
    Rectangle *pRec = new Rectangle(F, W);
    pRec->display();
    Rectangle *ptr = pRec;
    delete pRec;

    ptr->display();
    return 0;
}
