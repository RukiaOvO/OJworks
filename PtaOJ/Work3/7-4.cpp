#include <bits/stdc++.h>
using namespace std;

class Box
{
    public:
        Box(float x = 0):a(x){}

        void seta(float x){a = x;}

        void getvolume(){vol = a*a*a;}

        void getarea(){area = 6*a*a;}

        void disp()
        {
            cout << vol << " " << area << endl;
        }

        float a;
        float vol;
        float area;
};

int  main( ){
    float ab;
    cin>>ab;
    Box  obj;
    obj.seta( ab );
    obj.getvolume( );
    obj.getarea( );
    obj.disp( );
    return 0;
}