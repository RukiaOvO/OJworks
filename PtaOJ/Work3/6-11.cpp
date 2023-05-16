#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    int m_id;
    char m_name[10];
public:
    Student(int id=0,char *name="");
    ~Student();
    void print();
    
};

Student::Student(int id, char *name):m_id(id)
{
    strcpy(m_name, name);
    cout << "Hi!" << m_id << " " << m_name << endl; 
}
Student::~Student()
{
    cout << "Bye!" << m_id << " " << m_name << endl; 
}
// void Student::print()
// {
//     cout << m_id << " " << m_name << endl;
// }

int main()
{
    Student stu_array[3]={Student(1,"Zhang"),Student(2,"Wang")};
    return 0;
}


