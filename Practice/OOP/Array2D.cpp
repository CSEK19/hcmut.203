#include <iostream>
using namespace std;

template <class T>
class Array2D
{
    int r;
    int c;
    T **arr;

public:
    // TODO
    Array2D(T _dimen[2], T init)
    {
        this->r = _dimen[0];
        this->c = _dimen[1];
        if (this->r <= 0 || this->c <= 0)
        {
            cout << "error" << endl;
            return;
        }
        arr = new T *[this->r];
        for (int i = 0; i < this->r; i++)
        {
            arr[i] = new T[this->c];
            for (int j = 0; j < this->c; j++)
            {
                arr[i][j] = init;
            }
        }
    }

    Array2D *operator*(Array2D _obj)
    {
        if (this->getC() != _obj.getR())
        {
            cout << "error" << endl;
            return NULL;
        }

        Array2D<T> *pRes = new Array2D<T>(new int[2]{this->r, _obj.getC()}, 0);
        for (int i = 0; i < pRes->getR(); i++)
        {
            for (int j = 0; j < pRes->getC(); j++)
            {
                int val = 0;
                for (int k = 0; k < _obj.getR(); k++)
                {
                    val += this->arr[i][k] * _obj.arr[k][j];
                }
                pRes->arr[i][j] = val;
            }
        }
        return pRes;
    }

    T *operator[](int N)
    {
        if (N < 0 || N > this->getR())
        {
            cout << "error" << endl;
            return NULL;
        }

        return arr[N];
    }

    int getR() { return this->r; }
    int getC() { return this->c; }

    void disp()
    {
        for (int i = 0; i < this->r; i++)
        {
            for (int j = 0; j < this->c; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int a1, b1, c1;
    int a2, b2, c2;
    int check1, check2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> check1 >> check2;
    Array2D<int> *p1 = new Array2D<int>(new int[2]{a1, b1}, c1);
    Array2D<int> *p2 = new Array2D<int>(new int[2]{a2, b2}, c2);

    if (a1 <= 0 || b1 <= 0 || a2 <= 0 || b2 <= 0)
        return -1;

    (*p1)[1][0] = check1;
    (*p2)[1][2] = check2;
    p1->disp();
    p2->disp();

    Array2D<int> *p3 = (*p1) * (*p2);
    if (p3 != NULL)
        p3->disp();
    return 0;
}
