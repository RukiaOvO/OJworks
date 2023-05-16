#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        Student(int n, string na, char s):num(n), name(na), sex(s)
        {
            cout << "Constructor called." << endl;
        }

        ~Student() {cout << "Destructor called." << endl;}
        void display()
        {
            cout << "num:" << num << endl;
            cout << "name:" << name << endl;
            cout << "sex:" << sex << endl;
            cout << endl;
        }

    private:
        int num;
        string name;
        char sex;
};


int main()
  {Student stud1(10010,"Wang_li",'f');
   stud1.display();
   Student stud2(10011,"Zhang_fun",'m');
   stud2.display();
   return 0;
}
