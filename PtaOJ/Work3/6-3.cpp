#include<iostream>
using namespace std;

class Point
{
    public:

        Point(int a = 0, int b = 0):x(a), y(b){++count;}

        Point(Point &a)
        {
            x = a.getX();
            y = a.getY();
            ++count;
        }

        ~Point() {--count;}

        int getX() {return x;}
        int getY() {return y;}

        static int count;

    static void showCount()
    {
        cout << count << endl;
    }

    private:
        int x;
        int y;
};
int Point::count = 0;

int main()
{
int x,y;
cin>>x>>y;

Point::showCount();

Point a(x,y);
cout<<"Point A: "<<a.getX()<<","<<a.getY()<<endl;
Point::showCount();

Point b(a);
cout<<"Point B: "<<b.getX()<<","<<b.getY()<<endl;
Point::showCount();

Point c;
cout<<"Point C: "<<c.getX()<<","<<c.getY()<<endl;
Point::showCount();

Point d(x);
cout<<"Point D: "<<d.getX()<<","<<d.getY()<<endl;
Point::showCount();

return 0;
}
