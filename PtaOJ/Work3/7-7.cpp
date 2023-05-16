//Copied
#include<iostream>
#include<string>
#include<map>
#include<iomanip>

using namespace std;

class Student
{
    public:
    string name;
    int height=0;
    int weight=0;
};
 
int main(void)
{
    map<int,Student>stu;
    Student s;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>s.name>>s.height>>s.weight;
        if(stu[m].height<s.height)  //把同宿舍最高的放入容器中
            stu[m]=s;
    }
    for(auto i:stu)
        cout<<setw(6)<<setfill('0')<<i.first<<" "\
        <<i.second.name<<" "<<i.second.height<<" "<<i.second.weight<<endl;
}
