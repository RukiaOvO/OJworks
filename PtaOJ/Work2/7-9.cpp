#include <bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    double gpa;
    struct student* next;
};

int main(void)
{
    string temp_name;

    double sum = 0;
    int count = 0;
    struct student *list_head, *temp_node;
    if(temp_node = new(student))
    {
        list_head = temp_node;
        list_head->next = NULL;
    }
    struct student *tail = list_head;

    while(cin >> temp_name)
    {
        count++;
        if(temp_name == "-1") break;

        if(temp_node = new(student))
        {
            temp_node->name = temp_name;
            scanf("%lf", &temp_node->gpa);
            sum += temp_node->gpa;
            temp_node->next = NULL;
        }

        tail->next = temp_node;
        tail = temp_node;
        tail->next = NULL;
    }
    sum /= (count-1);

    struct student* check = list_head->next;
    while(check)
    {
        if(check->gpa >= sum)
        {
            cout << check->name << endl;
        }
        check = check->next;
    }
}