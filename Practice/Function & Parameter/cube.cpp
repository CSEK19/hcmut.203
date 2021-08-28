int cube(int a)
{
    a = a * a * a;
    return a;
}

void cube2(int &a)
{
    a = a * a * a;
}

void cube3(int *a)
{
    *a = (*a) * (*a) * (*a);
}
