#include <iostream>
using namespace std;
const int N=80;
struct Student{
  int num;
  int score[4];
};

bool s2(const Student &a, const Student &b)
{
  return (a.score[0]+a.score[1] > b.score[0]+b.score[1])?1:0;
}
  
bool s4(const Student &a, const Student &b)
{
  return (a.score[0]+a.score[1]+a.score[2]+a.score[3] > b.score[0]+b.score[1]+b.score[2]+b.score[3])?1:0;
}

int select(Student* st, int n, bool (*s)(const Student &, const Student &))
{
  int max = 0;
  for(int i = 1; i < n; i++)
  {
    (s(st[max], st[i]))?(max = max):(max = i);
  }

  return st[max].num;
}

int main()
{
  int i, j, k, n;
  bool s2(const Student &, const Student &);
  bool s4(const Student &, const Student &);
  Student st[N];
   cin>>n;
   for(i=0;i<n;i++){
      cin>>st[i].num;
      for(j=0;j<4;j++) cin>>st[i].score[j];
    }
   cout<<select(st, n, s2)<<endl;
   cout<<select(st, n, s4)<<endl;
}

