#include<iostream>
#include<cmath>
using namespace std;

class RTriangle
{
    public:
        
        RTriangle(double x, double y):a(x), b(y){}
        
        double getArea() {return a*b/2;}

        double getPerimeter() {return a+b+sqrt(a*a + b*b);}
    private:
        
        double a;
        double b;
};
    
int main(){
    double a,b;
    cin>>a>>b; 
    RTriangle RT(a,b);
    cout<<RT.getArea()<<endl;
    cout<<RT.getPerimeter()<<endl;
    return 0;
}