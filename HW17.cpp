#include <iostream>


class Vector
{
private:

    double x;
    double y;
    double z;

public:

    Vector(): x(1), y(1), z(1)
    {}
    Vector(double _x, double _y, double _z): x(_x), y(_y), z(_z)
    {}

    void Show()
    {
        std::cout << "Vector = " << "(" << x << ", " << y << ", " << z << ")" << "\n";
    }

    void Length()
    {
        std::cout << "Length of vector = " << sqrt(x * x + y * y + z * z);
    }
};



int main()
{
    Vector v(3.0, 4.0, 5.0);
    v.Show();
    v.Length();
}

