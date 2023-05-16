
#include <iostream>
#include <string>
using namespace std;
struct Dog{
  string no;
  int age;
  Dog *next;    
};
Dog *head=NULL;
void *del(Dog *p){
  if(p!=NULL)    {
    del(p->next);
    delete p;
  }
}
void display(Dog *p){
    if(p!=NULL){
        cout<<p->no<<' '<<p->age<<endl;
        display(p->next);
    }
}

Dog *clear();
Dog *insert(string &no, int age);

int main()
{

    int task, age;
    string no;
    cin>>task;
    while(task>0){
        switch(task){
            case 1:cin>>no>>age; head=insert(no, age); display(head); break;
            case 2:head=clear(); display(head); break;
        }
        cin>>task;
    }
    del(head);
    return 0;    
}

Dog* clear()
{
  if(head==NULL)  return head;
    Dog* cur = head,*p=head->next,*r=NULL;
    while (p != NULL) {
        Dog* travel = p;
        while (travel != NULL && cur->no != travel->no)
            travel = travel->next;
        if (travel != NULL) {
            if (cur == head) {
                delete(head);
                head = p;
                cur = head;
                p = p->next;
            }
            else {
                r->next = p;
                delete(cur);
                cur = p;
                p = p->next;
            }
        }
        else {
            r = cur;
            cur = cur->next;
            p = cur->next;
        }
    }
    return head;
}
Dog* insert(string& no, int age)
{
    Dog* newdog = new Dog;
    newdog->no = no;
    newdog->age = age;
    newdog->next = NULL;
    if (head == NULL) return newdog;
    Dog* cur = head,*p=NULL;
    while (cur != NULL && cur->age < newdog->age) {
        p = cur;
        cur = cur->next;
    }
    if (cur == head) {
        newdog->next = cur;
        return newdog;
    }
    newdog->next = cur;
    p->next = newdog;
    return head;
}