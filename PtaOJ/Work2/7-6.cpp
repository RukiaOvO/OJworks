#include <bits/stdc++.h>
using namespace std;

struct stud_node
{
    int id;
    char name[30];
    int score;

    stud_node* next = NULL;
};

struct stud_node *Creat_Stu_Doc();
struct stud_node *DeleteDoc(struct stud_node *head, int min);
void Ptrint_Stu_Doc(struct stud_node *head);

int main(void)
{
    struct stud_node* list_head = Creat_Stu_Doc();

    int min_score;
    scanf("%d", &min_score);

    struct stud_node* node = DeleteDoc(list_head, min_score);

    Ptrint_Stu_Doc(node);
}

struct stud_node *Creat_Stu_Doc()
{
    struct stud_node *temp_node, *list_head;
    if(temp_node = new(stud_node))
    {
        list_head = temp_node;
        list_head->next = NULL;
    }
    struct stud_node* tail = list_head;

    int temp;
    while(~scanf("%d", &temp))
    {
        if(temp == 0) break;
        
        if(temp_node = new(stud_node))
        {
            temp_node->id = temp;
            scanf("%s %d", &temp_node->name, &temp_node->score);

            tail->next = temp_node;
            tail = temp_node;
        }
    }

    return list_head;
}

struct stud_node *DeleteDoc(struct stud_node *head, int min)
{
    while(head)
    {
        if((head->next->score) >= min) break;
        head->next = head->next->next;
    }

    if(head->next == NULL) return head;

    struct stud_node* pro_head = head;
    while(head != NULL && head->next != NULL)
    {
        if(head->next->score < min)
        {
            head->next = head->next->next;
        }

        head = head->next;
    }

    return pro_head;
}

void Ptrint_Stu_Doc(struct stud_node *head)
{
    struct stud_node* temp = head->next;
    while(temp)
    {
        printf("%d %s %d\n", temp->id, temp->name, temp->score);
        temp = temp->next;
    }
}