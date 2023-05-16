#include <bits/stdc++.h>
using namespace std;

class Stud
{
    public:
        
        static int num;
        static int sum;

        Stud(int i, string n, int s)
        {
            id = i;
            name = n;
            score = s;
            
            num++;
            sum += score;
        }
        
        void disp()
        {
            cout << id << "," << name << "," << score << endl;  
        }

        static int avg() {return sum/num;}
    private:

        int id;
        string name;
        int score;
};

int Stud::sum=0;
int Stud::num=0;
int main()
{
    Stud  s1(1,"Li",89), s2(2,"Chert",78), s3(3,"zheng",94);
    s1.disp();
    s2.disp();
    s3.disp();
    cout<<"avg="<<Stud::avg()<<endl;
    return 0;
}