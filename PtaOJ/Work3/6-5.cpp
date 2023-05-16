#include <iostream>
#include <string>

using namespace std;
class Coach{
    string name;
    int winRate;
public:
    Coach(string n, int wr){
        name=n; winRate=wr;
    }
    void show();
};
class Club{
    string name;
    Coach c;
    int year;
public:
    Club(string n1, int y, string n2, int wr);
    void show();
};
int main(){
    string n1, n2;
    int year, winRate;
    cin>>n1>>year>>n2>>winRate;
    Club c(n1,year, n2, winRate);
    c.show();
    return 0;
}

void Coach::show()
{
    cout << name << " " << winRate << "%" << endl;
}

Club::Club(string n1, int y, string n2, int wr):c(n2, wr)
{
    name = n1;
    year = y;
}

void Club::show()
{
    cout << name << " " << year << endl;
    c.show();
}