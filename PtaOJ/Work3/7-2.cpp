#include <bits/stdc++.h>
using namespace std;

class Point
{
    public:
        Point(int a = 0, int b = 0):x(a), y(b){}

        void P_move(int m, int n)
        {
            x += m;
            y += n;

            cout << x << " " << y << endl;
        }

    private:
        int x;
        int y;
};

int main(void)
{
    int a, b;
    cin >> a >> b;
    Point n_point(a, b);

    int m_a, m_b;
    cin >> m_a >> m_b;
    n_point.P_move(m_a, m_b);
}