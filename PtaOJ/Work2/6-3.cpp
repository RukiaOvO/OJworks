//Copied
#include<iostream>
#include <string>

using namespace std;

struct Node
{
    string name;
    int start;
    int end;
    Node *next;
};

Node* add(Node *, Node *);
void display(Node *);

bool check(Node *head)
{
    if(head==NULL || head->next==NULL) return true;
    Node *p=head->next;
    if(head->start > p->start) return false;
    return check(p);
}
int main()
{
    Node *head=NULL, *p;
    int i, repeat;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        p = new Node;
        cin>>p->name>>p->start>>p->end;
        p->next=NULL;
        head = add(head, p);
    }
    if(!check(head)) cout<<"ERROR"<<endl;
    display(head);
    return 0;
}

Node* add(Node* head, Node* newnode)
{
    if (head == NULL) return newnode;
    Node* cur = head, * p = NULL;
    while (cur != NULL && cur->start < newnode->start) {
        p = cur;
        cur = cur->next;
    }
    if (cur == head) {
        newnode->next = head;
        return newnode;
    }
    p->next = newnode;
    newnode->next = cur;
    return head;
}
void display(Node* head)
{
    Node* r = head, * cur = head, * p = head->next;
    Node* max = head;
    while (p != NULL) {
        if (p->start < max->end) {
            p->name = '*' + p->name;
            if (max->name[0] != '*') max->name = '*' + max->name;
        }
        max = p->end > max->end ? p : max;
        p = p->next;
    }
    while (cur != NULL && cur != NULL) {
        cout << cur->name << ' ' << cur->start << ' '
            << cur->end << endl;
        cur = cur->next;
    }
}