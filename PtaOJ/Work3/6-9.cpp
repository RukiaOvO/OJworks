#include <iostream>
using namespace std;
class Student
 {public:
   Student(int n,float s):num(n),score(s){}
   int num;
   float score;
 };

int main()
{Student stud[5]={
  Student(101,78.5),Student(102,85.5),Student(103,98.5),
  Student(104,100.0),Student(105,95.5)};
 void max(Student* );
 Student *p=&stud[0];
 max(p);
 return 0; 
 }

void max(Student* ptr)
{
    int max_id = ptr->num;
    int max_score = ptr->score;

    for(int i = 1; i <= 4; i++)
    {
        ptr++;
        if(ptr->score > max_score)
        {
            max_id = ptr->num;
            max_score = ptr->score;
        }
    }

    cout << max_id << " " << max_score << endl;
}