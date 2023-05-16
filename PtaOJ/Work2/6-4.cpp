//Copied
#include <iostream>
using namespace std;
struct Player{
   bool drummer;
   int num;
   int grade;
   Player* next;
};
void print(Player *head){
    Player *p=head;
    cout<<p->num<<' ';
    p=p->next;
    cout<<p->num<<' ';
    p=p->next;
    cout<<p->num<<endl;    
}

#include<algorithm>
int cmp1(Player a, Player b)
{
    if(a.drummer == b.drummer)
        return a.num < b.num;
    else
        return a.drummer > b.drummer;
}
 
int cmp2(Player a,Player b)
{
    if(a.grade == b.grade)
        return a.num < b.num;
    else
        return a.grade > b.grade;
}
 
Player a[10010];
int i;
Player* create()
{
    Player *head = NULL;
    int num;
    for(i = 0;;i++)
    {
        cin>>num;
        if(num == -1)
            break;
        else
        {
            a[i].drummer = num;
            cin >> a[i].num >> a[i].grade;
            a[i].next = &a[i + 1];
        }
    }
    sort(a,a+i,cmp1);
    if(a[0].drummer == 0)
    {
        sort(a,a+i,cmp2);
        a[0].drummer = 1;
        sort(a, a + i, cmp1);
    }
    for (int j = 0; j < i; j++)
    {
        a[j].next = &a[j + 1];
    }
    a[i - 1].next = NULL;
    head = &a[0];
    return head;
}
 
Player* addPlayer(Player* head, Player* q)
{
    a[i-1].next = &a[i];
    a[i].drummer = q->drummer;
    a[i].num = q->num;
    a[i].grade = q->grade;
    i++;
    sort(a, a+i, cmp1);
    for (int j = 0; j < i; j++)
    {
        a[j].next = &a[j + 1];
    }
    a[i - 1].next = NULL;
    head = &a[0];
    return head;
}
 
Player* removePlayer(Player *head, int num)
{
    for (int j = 0; j < i; j++)
    {
        if (a[j].num == num)
        {
            a[j].drummer = 0;
            a[j].num = 9999999;
            a[j].grade = -1;
        }
    }
    sort(a, a + i, cmp1);
    if (a[0].drummer == 0)
    {
        sort(a, a + i, cmp2);
        a[0].drummer = 1;
        sort(a, a + i, cmp1);
    }
    for (int j = 0; j < i; j++)
    {
        a[j].next = &a[j + 1];
    }
    a[i - 1].next = NULL;
    head = &a[0];
    return head;
}

int main(){
    Player *head=NULL;
    int task, d, num, grade;
    head=create();
    while(1){
        cin>>task;
        if(task<0) break;
        if(task==1){
            Player*q = new Player;
            cin>>d>>q->num>>q->grade;
            if(d==1) q->drummer=true; else q->drummer=false;
            q->next = NULL;
            head=addPlayer(head, q);
        } 
        if(task==0){
            cin>>num;
            head=removePlayer(head, num);
        } 
        print(head);
    }
    return 0;    
}