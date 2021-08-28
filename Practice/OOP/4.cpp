#include <iostream>
using namespace std;

// TODO
class Integer
{
private:
    int val;

public:
    Integer(int _val) : val(_val) {}
    Integer(Integer *ptr) : val(ptr->getVal()) {}

    int getVal() const
    {
        return this->val;
    }

    void setVal(int _val)
    {
        val = _val;
    }

    void print();

    Integer operator+(const Integer &obj)
    {
        Integer result(0);
        result.setVal(this->getVal() + obj.getVal());
        return result;
    }

    Integer operator+(int N)
    {
        this->setVal(this->getVal() + N);
        return this;
    }
};

void Integer::print()
{
    cout << this->val << endl;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    Integer a(x);
    Integer b(y);
    Integer c(z);
    a.print();
    b.print();
    (a + b + c + 4).print();
    return 0;
}