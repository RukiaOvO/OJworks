#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Ptrint_Stu_Doc(struct Node *head)
{
    struct Node* temp = head->next;
    while(temp)
    {
        if(temp->next == NULL)printf("%d\n", temp->data);
        else printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(void)
{
    int times;
    cin >> times;
    getchar();

    for(int i = 1; i <= times; i++)
    {
        struct Node *list_head, *temp_node;

        if(temp_node = new(Node))
        {
            list_head = temp_node;
            list_head->next = NULL;
        }
        struct Node *tail = list_head;
        
        int temp_num;
        while(~scanf("%d", &temp_num))
        {
            if(temp_num == -1) break;

            if(temp_num%2 == 0)
            {
                if(temp_node = new(Node))
                {
                    temp_node->data = temp_num;
                    temp_node->next = NULL;

                    tail->next = temp_node;
                    tail = temp_node;
                }
            }
        }

        Ptrint_Stu_Doc(list_head);
    }
}