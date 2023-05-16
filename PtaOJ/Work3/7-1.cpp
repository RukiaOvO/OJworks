#include <bits/stdc++.h>
using namespace std;

class Date
{
    public:
        Date(int y, int m, int d):year(y), month(m), day(d){}

        void isLeap()
        {
            if(year%400 || (!(year%100) && (year%4)))
            {
                cout << "no" << endl;
            }
            else cout << "yes" << endl;
        }
    private:
        int year;
        int month;
        int day;
};

int main(void)
{
    int y, m, d;
    cin >> y >> m >> d;

    Date day(y, m, d);
    day.isLeap();
}