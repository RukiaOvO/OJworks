#include <iostream>
using namespace std;

float &cut(float &n, float &m)
{
    return (n > m)?(m):(n);
}

int main(){
    float a,b;
    cin>>a>>b;
    cut(a,b)=0;
    cout<<"to pay:"<<a+b<<endl;    
    return 0;
}
