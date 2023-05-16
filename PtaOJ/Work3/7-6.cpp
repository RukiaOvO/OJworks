#include<iostream>
using namespace std;

class Student
{
	int grade;
	static int sum;
	public:
		Student(int a)
		{
			sum=sum+a;
		}
		static void dis()
		{
			cout<<sum<<endl<<sum/5;
		}
		
};
int Student::sum=0;

int main()
{
	int a;
	for(int i=0;i<5;i++)
	{
		cin>>a;
		Student s(a);
	}
	Student s(0);
	s.dis();
	return 0;
}
