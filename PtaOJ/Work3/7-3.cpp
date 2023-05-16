#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

class Circle
{
    public:
        Circle(double n):radius(n){}

        double getArea()
        {
            return PI*radius*radius; 
        }
    private:
        double radius;
};

class Rectangle
{
    public:
        Rectangle(double a, double b):length(a), width(b){}
    
        double getArea()
        {
            return length*width;
        }

    private:
        double length;
        double width;
};

int main(void)
{
    double r, l, w;
    cin >> r >> l >> w;

    Circle pool(r);
    Rectangle fence(l, w);

    double Area = fence.getArea() - pool.getArea();

    cout << Area*20 << endl;
}